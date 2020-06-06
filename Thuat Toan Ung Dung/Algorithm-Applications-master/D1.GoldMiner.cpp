//The Kingdom ALPHA has n warehouses of golds located on a straight line 
//and are numbered 1,2,...,n. The warehouse i has amount of ai (ai is non-negative integer) 
//and is located at coordinate i (i=1,...,n). The King of ALPHA opens a competition for hunters 
//who are responsible to find a subset of gold warehouses having largest total amount of golds 
//with respect to the condition that the distance between two selected warehouses must be greater than or 
//equal to L1 and less than or equal to L2.
//
//Input
//Line 1 contains n, L1, and L2 (1=n=100000,1=L1=L2=n)
//Line 2 contains n integers a1,a2,…,an
//Output
//Contains only one single integer denoting the total amount of golds of selected warehouses.
//
//Example
//input
//6 2 3
//3 5 9 6 7 4
//output
//19



#include<iostream>
 
using namespace std;
 
int goldMining(int M[], int n, int L1, int L2)
{
	int L[n];
	int i,j;
	
	// khoi tao mang L = M, voi L[i] la so vang dao dc nhieu nhat cho den diem i
	for(i = 0; i< L1; i++)
		L[i] = M[i];
	
	// xet max trong khoang tu L1 den L2 o dau chuoi
	for(i = L1; i < L2; i++)
	{
		int max = L[0];
		for(j = 1; j <= i - L1; j++)
		{
			if(max < L[j]){
				max = L[j];
			}
		}
		L[i] = M[i] + max;
	}
	
	// xet max tu L2 den n	
	for(i = L2; i< n;i++)
	{
		int max = L[i-L2];
		for(j = i - L2 + 1; j <= i - L1; j++)
		{
			if(max < L[j])
				max = L[j];
		}
		L[i] = M[i] + max;
	}
	
	// xet max trong khoang tu n- L1 + 1 den n
	int max = L[n- L1];
	for(i = n - L1 + 1; i < n; i++)
	{
		if(max < L[i])
			max = L[i];
	}
	
	return max;
}
 
int main()
{
	int n, L1, L2;
	cin >>n >> L1 >> L2;
	int M[n];
	int i, j;
	for(i = 0; i<n;i++)
		cin >> M[i];
	
	int result = goldMining(M, n, L1, L2);
	cout << result;
	return 0;
}
