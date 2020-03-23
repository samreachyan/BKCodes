#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
  
// returns (a*b)%c 
ll mulmod(ll a,ll b,ll c) 
{ 
    if (b==0) 
        return 0; 
  
    ll s = mulmod(a, b/2, c); 
  
    // If b is odd, return 
    // (a+(2*a)*((b-1)/2))%c 
    if (b%2==1) 
        return (a%c+2*(s%c)) % c; 
    else
        return (2*(s%c)) % c; 
} 
  
// Driver code 
int main() 
{ 
    ll a, b, c;
    cin >> a >> b;
    c = pow(10,9)+7;
    printf("%lld", mulmod(a, b, c)); 
    return 0; 
} 
