//The BACP is to design a balanced academic curriculum by assigning periods to courses 
//in a way that the academic load of each period is balanced . 
//There are N courses 1,2,…,N that must be assigned to M periods 1,2,…,M. 
//Each courses i has credit ci and has some courses as prerequisites. 
//The load of a period is defined to be the sum of credits of courses assigned to that period. 
//The prerequisites information is represented by a matrix AN×N in which Ai,j = 1 indicates 
//that courses i must be assigned to a period before the period to which the course j is assigned. 
//Compute the assignment such that the maximum load for all periods is minimal.
//
//Input
//Line 1 contains N and M (2=N=16,2=M=5)
//Line 2 contains c1,c2,…,cN
//Line i+2(i=1,…,N) contains the ith line of the matrix A
//Output
//Unique line contains that maximum load for all periods of the solution found
//
//Example
//input
//6 2
//4 4 4 4 2 4
//0 0 0 0 0 0
//0 0 0 0 0 0
//0 0 0 0 0 0
//0 0 1 0 0 0
//0 0 1 0 0 0
//1 0 0 0 0 0
//output
//12


#include<iostream>
#include<vector>
#include<set>
 
using namespace std;
 
int n,m;
int Credits[16];
int Prerequisites[16][16];
vector<vector< int > > Results;
vector<set<int> > Tien_quyet;
 
void input()
{
	cin >> n >> m;
	int i,j;
	for(i = 0; i < n; i++)
		cin >> Credits[i];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j< n; j++)
		{
			cin >> Prerequisites[i][j];
		}
	}
}
 
bool isValid(int period, int course)
{
	int i,j;
	for(i = 0; i <= period; i++)
	{
		for(j = 0; j < Results[i].size(); j ++)
		{
			int r = Results[i][j];
			if(Prerequisites[course][r] == 1)
				return false;
		}
	}
	for(i = period + 1; i < m; i++)
	{
		for(j = 0; j < Results[i].size(); j ++)
		{
			int r = Results[i][j];
			if(Prerequisites[r][course] == 1)
				return false;
		}
	}
	return true;
}
 
int maxSumPeriod()
{
	int i,j;
	int maxSum = 0;
	for(i  = 0; i<Results.size(); i++)
	{
		int sum = 0; 
		for(j = 0; j < Results[i].size(); j++)
		{
			sum+= Credits[Results[i][j]] ;
		}
		maxSum = max(sum, maxSum);
	}
	return maxSum;
}
 
void BACP(int count, int &ans)
{
	int i,j;
	if(count == n)
	{
		ans = min(ans, maxSumPeriod());
		return;
	}
	for(i = count; i < n; i++)
	{
		int tmp = 0;
		for(j = 0; j < m; j++)
		{
			if(isValid(j, i)){
				if(j == m - 1)
					tmp = m;
				Results[j].push_back(i);
				count ++;
				
				
				BACP(count, ans);
				Results[j].pop_back();
				tmp ++;
				count --;
				
				
			}
			else{
				tmp ++;
			}
		}
		if(tmp >= m)
			break;
	}
}
 
int main()
{
	input();
	int i,j;
	for(i = 0; i < m; i++)
	{
		vector<int> v;
		Results.push_back(v); 
	}
	for(i = 0; i < m; i++)
	{
		set<int> s;
		Tien_quyet.push_back(s); 
	}
	int ans = 999999;
	
	BACP(0, ans);
	cout << ans;
	return 0;
}
