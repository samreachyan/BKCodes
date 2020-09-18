//A Maze is represented by a 0-1 matrix aN×M in which ai,j = 1 means cell (i,j) is an obstacle, 
//ai,j = 0 means cell (i,j) is free. From a free cell, we can go up, down, left, or right 
//to an adjacent free cell. Compute the minimal number of steps to escape from a Maze from a given cell (i0,j0) 
//within the Maze.
//
//Input
//Line 1 contains N,M,i0,j0 (2<=N,M<=900)
//Line i+1 (i=1,…,N) contains the ith line of the matrix aN×M
//Output
//Unique line contains the number minimal of steps to escape the Maze or -1 if no way to escape the Maze.
//
//Example
//input
//8 12 5 6
//1 1 0 0 0 0 1 0 0 0 0 1
//1 0 0 0 1 1 0 1 0 0 1 1
//0 0 1 0 0 0 0 0 0 0 0 0
//1 0 0 0 0 0 1 0 0 1 0 1
//1 0 0 1 0 0 0 0 0 1 0 0
//1 0 1 0 1 0 0 0 1 0 1 0
//0 0 0 0 1 0 1 0 0 0 0 0
//1 0 1 1 0 1 1 1 0 1 0 1
//output
//7


#include<iostream>
#include<queue>
 
using namespace std;
#define V 901
short Smin = 9999;

// dieu kien de di tiep 
bool isValid(bool M[][901], int n, int m, int i, int j)
{
	if(i < n && i >=0 && j>=0 && j < m)
		if(M[i][j] == 0)
			return true;
	
	return false;
}

//maze with BFS 
void maze(bool M[][V], short n, short m, short i0, short j0)
{
	short L[n][m];
	int i, j;
	for(i= 0; i<n; i++)
		for(j = 0; j < m; j++)
			L[i][j] = 0;
	L[i0][j0] = 1;
	queue<pair<int, int> > q;
	q.push(make_pair(i0, j0));
	
	short ROW[4] = {-1, 0, 0, 1};
	short COL[4] = {0, -1, 1, 0};
	while(!q.empty())
	{
		i0 = q.front().first;
		j0 = q.front().second;
		q.pop();
		for(int k = 0; k < 4; k++)
		{
			i = i0+ROW[k];
			j = j0+COL[k];
			
			// neu thoa man dieu kien
			if(isValid(M, n, m, i, j) && L[i][j] == 0){
				L[i][j] = L[i0][j0] + 1;
				if(i == n-1 || i == 0 || j == m-1 || j == 0)
					// khi da ra khoi me cung thi danh dau Smin
					Smin = min(Smin, L[i][j]);
				else
					// neu khong thi push vi tri do vao queue
					q.push(make_pair(i0+ROW[k], j0 + COL[k]));
			}
		}
	}
	
}
int main()
{
	short n, m , i0, j0;
	cin >>n >> m>>i0 >>j0;
	
	bool M[n][901];
	short i, j;
	for(i = 0; i<n;i ++)
		for(j = 0; j< m; j++)
			cin >> M[i][j];
	
	maze(M, n, m, i0-1, j0-1);
	cout << Smin;
	return 0;
}
