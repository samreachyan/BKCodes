//Hình ?nh ch?p t? v? tinh vùng bi?n Atlantic g?m nhi?u hòn d?o du?c chia nh? thành các lu?i ô vuông. 
//Máy quang h?c s? ti?n hành quét t?ng lu?i ô vuông, và ti?n hành tô màu d? n?u ô dó có ch?a d?t c?a hòn d?o nào dó, 
//và tô màu xanh n?u không có hòn d?o nào n?m trong nó. Hãy:
//
//* Ð?m s? hòn d?o có trong ?nh
//
//* Ðua ra di?n tích c?a hòn d?o l?n nh?t (= s? lu?ng lu?i ô vuông ch?a hòn d?o l?n nh?t)
//
//Input
//Dòng d?u tiên ch?a hai s? nguyên duong n,m<=1000.
//
//Các dòng ti?p theo bi?u di?n lu?i ô vuông nhu ví d?.
//
//Output
//G?m hai dòng:
//
//Dòng d?u tiên ch?a s? lu?ng hòn d?o trong ?nh.
//
//Dòng th? hai ch?a di?n tích c?a hòn d?o l?n nh?t nhu miêu t?.
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

