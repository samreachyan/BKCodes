#include<bits/stdc++.h>
 
using namespace std;
#define N 1000001
int n;
int M[N][3];
 
// mang lt[i] luu do dai cong viec dai nhat ket thuc tai thoi diem <= i
// mang ls[i] luu do dai cong viec dai nhat bat dau tai thoi diem >= i
int ls[N];
int lt[N];
 
void input()
{
	std::ios::sync_with_stdio(false);
	cin >> n;
	for(int i =1; i <= n; i++)
	{
		cin >> M[i][1] >> M[i][2];
	}
}
 
int solProblem()
{
	memset(lt, 0, sizeof(lt));
	memset(ls, 0, sizeof(ls));
	int i,j;
	
	// luu cong viec dai nhat tai thoi diem i cua lt va ls
	for(i = 1; i<= n; i++)
	{
		int ti = M[i][2];
		int si = M[i][1];
		lt[ti] = max(lt[ti], ti - si);
		ls[si] = max(ls[si], ti - si);
	}
	
	// luu cong viec dai nhat tai thoi diem <= i cua lt va ls
	for(i = 1; i <= N; i++)
	{
		lt[i] = max(lt[i], lt[i-1]);
		ls[N- i] = max(ls[N-i+1], ls[N-i]);
	}
	
	// tinh tong 2 khoang thoi gian dai nhat ket thuc tai i va bat dau tai i + 1 
	int result = 0;
	for(i = 1; i <= N; i++)
	{
		result = max(result, lt[i] + ls[i+1]);
	}
	
	return result;
}
 
int main()
{
	input();
	int result = solProblem();
	cout << result;
	return 0;
}
