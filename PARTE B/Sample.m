num = [10 20];
den = [1 9 26 24];
[numd, dend] = c2dm(num, den, 1, 'zoh');


rootsDen = roots(den);

timeConstants = zeros(length(rootsDen),1);

for i=1:length(rootsDen)
    timeConstants(i)=-1/rootsDen(i);
end

sampleTime = 1/10 * min(timeConstants)