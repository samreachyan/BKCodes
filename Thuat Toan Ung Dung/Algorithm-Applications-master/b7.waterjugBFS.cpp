// Water jug using BFS

#include<iostream>
#include<queue>
 
using namespace std;

//khoi tao 2 queue de chua 2 trang thai cua 2 binh a va b 
queue<int> q1, q2;
 
int checking(int x, int y, int c, short M[][1000], int z)
{
	if(x == c || y == c)
	{
		cout << z;
		return z;
	}
	else if((x == 0 && y == 0) || M[x][y] > 0)
		return 0;
	else{
		q1.push(x);
		q2.push(y);
		M[x][y] = z;
		return 0;
	}
}
 
void water_jug(int a, int b, int c)
{
	short M[1000][1000];
	for(int i = 0; i<100; i++)
		for(int j = 0; j< 100; j++)
			M[i][j] = 0;
	int t;
	q1.push(0);
	q2.push(0);
	while(!q1.empty() && !q2.empty())
	{
		int x = q1.front();
		int y = q2.front();
		q1.pop();
		q2.pop();
		int z = M[x][y] + 1;
		
		// do het nuoc tu binh a di
		if(checking(0, y, c, M, z))
			return;
		
		// do het nuoc tu binh b ra ngoai
		if(checking(x, 0, c, M, z))
			return;
			
		// do tu b sang a cho day binh a
		if(checking(a, y, c, M, z))
			return;
			
		// do tu a sang b cho day binh b
		if(checking(x, b, c, M, z))
			return;
		
		// do tu a sang cho day binh b hoac het nuoc tai a
		t = min(x, b - y);
		if(checking(x - t, y+ t, c, M, z))
			return;
		
		// do tu b sang cho day binh a hoac het nuoc tu binh b
		t = min (y, a-x);
		if(checking(x+t, y - t, c, M, z))
			return;
	}
	cout << -1;
}
 
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	water_jug(a, b, c);
	
	return 0;
}
