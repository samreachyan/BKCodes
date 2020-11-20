#include<iostream>
using namespace std;
#include<string>

void countLetter(string word);
void countNumber(string word);

int main()
{
	string word="Hell2o0 M1y45Wol3d";
	
	countLetter(word);
	countNumber(word);
}
void countLetter(string a)
{
	int n=0;
	for ( int i=0 ; i< a.size(); i++)
		if ( a[i] != 32 )
		{
			if ( a[i] >=65 && a[i]<=90 || a[i] >= 97 && a[i] <= 122 )
			{
				n++;
			}
		}
	cout<<n<<endl;
}
void countNumber(string a)
{
	int m=0;
	for (int i=0 ; i < a.size() ; i++ )
		if ( a[i] >=48 && a[i]<=57 )
		{
			m++;
		}
	cout<<m<<endl;
}
