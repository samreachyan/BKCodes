//Given an integers sequence a=(a1,a2,…,an).
// A subsequence of a is defined to be ai,ai+1,…,aj. 
// The weight of a subsequence is the sum of its elements. 
// Find the subsequence having the highest weight.
//
//Input
//Line 1 contains n (1=n=106)
//Line 2 contains a1,…,an (-500=ai=500)
//Output
//Write the weight of the highest subsequence found.
//
//Example
//input
//10
//3 -1 -3 5 2 5 0 -1 5 4
//output
//20

#include<iostream>
 
using namespace std;
 
 
 
int main()
{
	int n;
	cin>>n;
	int M[n];
	int i,j;
	for(i = 0; i< n; i++)
		cin >> M[i];
	
	int maxSum = M[0];
	int maxEnd = M[0];
	for(i = 1; i< n; i++)
	{
		int u = M[i];
		int v = M[i] + maxEnd;
		if(u > v)
			maxEnd = u;
		else
			maxEnd = v;
		if(maxEnd > maxSum)
		{
			maxSum = maxEnd;
		}
	}
	cout << maxSum<<endl;
}
