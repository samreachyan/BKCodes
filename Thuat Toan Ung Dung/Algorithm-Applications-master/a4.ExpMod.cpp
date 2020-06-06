//Given two integers a and b. Compute ab mod (10^9+7)
//
//Input
//One line contains two integers a and b
//Output
//The value ab mod (10^9+7)




#include<iostream>
using namespace std;
 
long long power_mod(int x, int y, long long z)
{
    long long number = 1;
    if(y < 0){
    	x = 1/x;
    	y = -y;
	}
    while (y)
    {
    	//if y la so le
        if (y & 1)
            number = number * x % z;
        // y = y/2
        y >>= 1;
        x = (long long)x * x % z;
    }
    return number;
}
 
int main()
{
    int a = 0, b=0;
    cin>>a;
    cin>>b;
    long long p = 1e9;
    p = p+7;
    long long r = power_mod(a, b, p);
    if (a < 0 && b%2 == 1)
    	r = p + r;
    cout<<r<<endl;
    return 0;
}
