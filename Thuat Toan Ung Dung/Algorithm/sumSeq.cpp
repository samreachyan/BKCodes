//Given a sequence a1,a2,…,an. Compute S=a1+a2+...+an.
//
//Input
//Line 1: number n of elements
//Line 2: n integers a1,a2,…,an
//Output
//Unique line contains S mod 10^9+7


#include<iostream>
 
using namespace std;
 
int main()
{
	long n = 0;
	cin >> n;
	long long Sum = 0;
	long long p = 1e9;
	p = p+7;
	for (unsigned long i = 0; i < n; i++)
	{
		long long a = 0;
		cin >> a;
		if(a >= p){
			a = a % p;
		}
		Sum += a;
		if(Sum >= p){
			Sum = Sum%p;
		}
	}
	cout << Sum <<endl;
	return 0;
}
