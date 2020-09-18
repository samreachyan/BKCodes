//H�nh ?nh ch?p t? v? tinh v�ng bi?n Atlantic g?m nhi?u h�n d?o du?c chia nh? th�nh c�c lu?i � vu�ng. 
//M�y quang h?c s? ti?n h�nh qu�t t?ng lu?i � vu�ng, v� ti?n h�nh t� m�u d? n?u � d� c� ch?a d?t c?a h�n d?o n�o d�, 
//v� t� m�u xanh n?u kh�ng c� h�n d?o n�o n?m trong n�. H�y:
//
//* �?m s? h�n d?o c� trong ?nh
//
//* �ua ra di?n t�ch c?a h�n d?o l?n nh?t (= s? lu?ng lu?i � vu�ng ch?a h�n d?o l?n nh?t)
//
//Input
//D�ng d?u ti�n ch?a hai s? nguy�n duong n,m<=1000.
//
//C�c d�ng ti?p theo bi?u di?n lu?i � vu�ng nhu v� d?.
//
//Output
//G?m hai d�ng:
//
//D�ng d?u ti�n ch?a s? lu?ng h�n d?o trong ?nh.
//
//D�ng th? hai ch?a di?n t�ch c?a h�n d?o l?n nh?t nhu mi�u t?.
//
//Example
//input
//7 11
//00000000010
//11100000000
//00000111100
//00111111110
//00111111110
//00111111000
//00000110000
//output
//3
//28

#include<iostream>
#include<string>
#include<set>
#include<vector>
 
using namespace std;
 
int S = 0;
int Smax = 0;
 
//DFS tap hop cac diem co toa do la 1 bat dau tu p 
void DFS(pair<int,int> p, set<pair<int, int> > *Set)
{
	set<pair<int, int>> ::iterator it;
	Set->erase(p);
	short ROW[4] = {-1, 0, 0, 1};
	short COL[4] = {0, -1, 1, 0};
	S ++;
	for (short i = 0; i<4; i++)
	{
		pair<int,int> p2 = make_pair(p.first+ROW[i], p.second+COL[i]);
		it = Set->find(p2);
		if(it!=Set->end()){
			DFS(p2, Set);
		}
	}
}
 
 
 
int countIsland(vector<string> V)
{
	int n = V.size();
	int m = V[0].size();
	
	// Khoi tao set chua toa do cua cac diem co gia tri 1
	set<pair<int, int> > Set;
	for(int i= 0; i<n; i++)
	{
		for(int j = 0; j< m; j++)
		{
			if(V[i][j] == '1')
			{
				Set.insert(make_pair(i,j));
			}
		}
	}
	int count = 0;
	while(!Set.empty()){
		//set<pair<int,int> >::iterator it;
		auto x = Set.begin();
		
		// DFS tim dien tich moi dao va dem so dao tim thay
		DFS(*x, &Set);
		Smax = max(S, Smax);
		S = 0;
		count++;
	}
    return count;
}
 
int main()
{
	int n,m;
	cin >> n;
	cin >> m;
	int i,j;
	
	vector<string> V;
	for( i = 0; i < n; i++){
		string s;
		cin >> s;
		V.push_back(s);
	}
	int count = countIsland(V);
	cout<<count<<endl;
	cout<<Smax<<endl;
	return 0;
}

