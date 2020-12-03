load('clustering.dat');

train = 0.7;
trainElements = clustering(1:round(length(clustering)*train),:);

test = round(length(clustering)*train)+1:length(clustering);
testElements = clustering(test,:);


genfis_options = genfisOptions('SubtractiveClustering');
initial_fis = genfis(clustering(:,1:6), clustering(:,7), genfis_options);

%train

%1 for hybrid and 0 for retropropagation
anfis_options = anfisOptions('InitialFIS',initial_fis, 'OptimizationMethod', 0);
%anfis_options = anfisOptions('InitialFIS',initial_fis, 'OptimizationMethod', 1);
[fis_subtractive, error_s] = anfis(trainElements, anfis_options);
%save Subtractive Retropropagation or Hybrid
writeFIS(fis_subtractive,'fisSubtractiveRetropropagation');
%writeFIS(fis_subtractive,'fisSubtractiveHybrid');

%test
subtractiveClust = evalfis(testElements(:,1:6),fis_subtractive);

%squared error in each instant
sum = 0;
for i=1:length(testElements)
    sum = sum + (testElements(i,7) - subtractiveClust(i,:))^2;
end

mse = sum/length(testElements)

%generate plot
sizeP = length(testElements);
plot(1:1:sizeP,testElements(:,7),'*',1:1:sizeP,subtractiveClust,'+')

