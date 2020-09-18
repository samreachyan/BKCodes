//A Drone is planned to fly from point 1 to point N in which it can stop at some points among 1,2,…,N. 
//These points are located on a line, point i has coordinate i. Each point i is associated with
//
//ci: amount of good
//ai: amount of energy
//When the drone stops at point i, it takes the amount ci of good and the amount ai of energy. 
//After that, it can fly farthest to point i+ai (it can stops at some point among i+1,i+2,…,i+ai). 
//Due to technical constraints, the Drone can only stop at at most K+1 point. 
//Compute the route (sequence of points at which the drone stops to take goods and energy) 
//starting from point 1 and terminating at point N such that the total amount of goods is maximal (points 1 and N 
//are considered as points that the Drone stop).
//
//Input
//Line 1: N and K (1=N=3000,1=K=100)
//Line 2: N positive integers c1,c2,…,cN (1=ci=20,?i=1,…,N)
//Line 3: N positive integers a1,a2,…,aN (1=ai=50,?i=1,…,N)
//Output
//Total amount of goods that the Drone takes during the route, or value -1 if no route exists.
//
//Example
//input
//6 3
//3 1 4 2 2 2
//2 3 1 1 3 1
//output
//8

#include<bits/stdc++.h>
using namespace std;
 
int n, k;
int C[3001], A[3001];
 
void input()
{
	int i;
	cin >> n >> k;
	for(i = 1; i <= n; i++)	cin >> C[i];
	for(i = 1; i <= n; i++)	cin >> A[i];
}
 
 
int main()
{
	input();
	
	//Khoi tao mang M voi M[i][j] la so hang hoa toi da lay duoc 
	//khi ket thuc tai vi tri j va sau i lan lay
	int M[k+1][n+1];
	memset(M, 0, sizeof(M));
	int i, j;
	
	//Khi n == 2 thi hien nhien bang tong 2 gia tri 
	for(i = 1; i <= k ; i++)
	{
		for(j = 1; j <= 2; j++)
		{
			int sum = 0;
			for(int t = 1; t <= j; t++)
				sum = sum+C[t];
			M[i][j] = sum;
		}
	}
	
	// Khi j = 3 -> A[1] + 1 voi A[1] la so nhien lieu tai vi tri 1
	for(j = 3; i <= A[1] + 1; i++)
	{
		// Luong hang hoa lay duoc bang tong cua 2 gia tri
		M[1][j] = C[1] + C[j];
	}
	
	// Khi i = 2 -> k va j = 3 -> n
	for(i = 2; i <= k; i++)
	{
		for(j = 3; j <= n; j++)
		{
			vector<int> v;
			
			// Vi gia tri toi da cua nhien lieu la 50 nen xet max(t) = 50
			// Tim gia tri lon nhat trong hang i - 1 ma tu do co the bay toi duoc i
			for(int t = j - 1; t >= max(j - 50, 1); t--)
			{
				if(A[t] >= j - t)
					v.push_back(M[i-1][t]);
			}
			
			// m = max in vector
			int m = *max_element(v.begin(), v.end());
			if(m != 0)
				M[i][j] = C[j] + m;
			else
				M[i][j] = 0;
			
		}
	}
	
//	for(int i = 1; i <= k; i++)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			cout << M[i][j] << " ";
//		}
//		cout  << endl;
//	}
	
	// Ket qua la M[k][n]
	if(M[k][n] == 0)
		cout << -1;
	else{
		cout << M[k][n];
	}
	
	return 0;
}

