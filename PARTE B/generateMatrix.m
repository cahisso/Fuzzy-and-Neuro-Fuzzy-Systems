sim("InputOutput");
u = InputRandom.data;
y = DiscreteOut.data;

%ignore first 3 iterations
newSize = size(u,1)-3;

%create matrix with the new size for clustering
clustering = zeros(newSize, 7);

for i=1:newSize
    j = i+3;
    clustering(i,1) = y(j-1);
    clustering(i,2) = y(j-2);
    clustering(i,3) = y(j-3);
    clustering(i,4) = u(j-1);
    clustering(i,5) = u(j-2);
    clustering(i,6) = u(j-3);
    clustering(i,7) = y(j);
end

save('clustering.dat', 'clustering', '-ascii');