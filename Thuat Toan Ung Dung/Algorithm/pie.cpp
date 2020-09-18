#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > V_input(10000);
vector<int > v_numpie(10000);
vector<int > v_numfriend(10000);

# define PI 3.14159265358979323846 

void input()
{
	cin >> n;
	int i,j;
	for(i = 0; i < n; i++)
	{
		cin >> v_numpie[i];
		cin >> v_numfriend[i];
		
		// tinh ca ban than minh nen + voi 1
		v_numfriend[i] ++;
		for(j = 0; j < v_numpie[i]; j ++)
		{
			int r;
			cin >> r;
			
			//Binh phuong ban kinh
			V_input[i].push_back(r*r);
		}
	}
//	for(i= 0; i < n;i++)
//	{
//		cout << v_numpie[i] << " "<<v_numfriend[i] << endl;
//	}
//	for(i = 0; i < n; i ++)
//	{
//		for(j = 0; j < V_input[i].size(); j++)
//		{
//			cout << V_input[i][j] << " ";
//		}
//		cout << endl;
//	}
}

float dividePie(int numpie, int numfriend, vector<int> v_radius)
{
	int i;
	int len = v_radius.size();
	sort(v_radius.begin(), v_radius.end(), greater<int>());
	
	//Neu so luong banh lon hon so luong nguoi
	if(len > numfriend){
		for(i = numfriend; i < len; i++)
		{
			v_radius.erase(v_radius.begin() + i);
		}
	}
	
	int tmp = 2;
	
}

int main()
{
	input();
	for(int i = 0; i <1; i++)
	{
		float result = dividePie(v_numpie[i], v_numfriend[i], V_input[i]);
		printf("%.6f\n", result*PI);
	}
	return 0;
}

