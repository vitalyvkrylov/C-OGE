sum1 = sum(map(int, str(oct(55)[2:])))
sum2 = sum(map(int, str(oct(83)[2:])))
sum3 = sum(map(int, str(oct(91)[2:])))
print(max(sum1, sum2, sum3))