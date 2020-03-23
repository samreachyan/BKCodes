#include<iostream>
using namespace std;
long long exp_mod(long long a, long long b, long long mod){
    
    if(b==1) return a % mod; 
    long long t=exp_mod(a, b/2, mod);
    t = t*t % mod; // left part and right part.
    if (b%2) t=t*a% mod;
    return t;
}
int main(){
    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    cout<< exp_mod(a, b, 1000000007);
}