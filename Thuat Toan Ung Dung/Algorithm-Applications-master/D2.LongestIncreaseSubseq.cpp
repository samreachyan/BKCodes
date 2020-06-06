//Given a sequence of integers a1,…,an. 
//Compute the longest subsequence (elements are not necessarily continous) 
//in which elements are in an increasing orders.
//
//Example
//input
//10
//7 2 3 7 5 4 2 1 9 6
//output
//4

#include<iostream>
 
using namespace std;
 
int maxInArr(int A[], int n)
{
	int max = A[0];
	for(int i = 1; i < n; i++)
	{
		if(max < A[i])
			max = A[i];
	}
	return max;
}
 
int LIS(int M[], int n)
{
	//khoi tao mang L[n] voi L[i] la do dai chuoi con tang dai nhat tinh den diem i
	int L[n];
	L[0] = 1;
	int i,j;
	for(i = 1; i < n; i++)
	{
		L[i] = 1;
		for(j =0; j < i; j++)
		{
			//L[i] = max(L[i], 1 + L[j])
			if(M[j] < M[i] && L[i] < L[j] + 1)
				L[i] = 1 + L[j];
			
		}
	}
	int max = maxInArr(L, n);
	return max;
}
 
int main()
{
	int n;
	cin >>n;
	int M[n];
	int i,j;
	for(i = 0; i < n; i++)
		cin >> M[i];
		
	int result = LIS(M, n);
	cout << result;
	
	return 0;
}
