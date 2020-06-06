#(a+b) mod 10^9+7
#
#Input
#contains a and b
#
#Output
#(a+b) mod 10^9+7

L = list(map(int, input().split(' ')))
a = L[0]
b = L[1]
 
p = 1e9
p=p+7
 
r1 = a % p
r2 = b%p
 
r = r1 + r2
 
if(r1 + r2 >= p):
    r = r - p
 
print(int(r))

