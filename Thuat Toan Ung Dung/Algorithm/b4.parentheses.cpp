//Input
//The input file consists of several datasets. The first line of the input file contains the number 
//of datasets which is a positive integer T and is not greater than 1000. 
//Each of T following lines describes a parentheses expression including: '(',')','[',']','{','}'.
//
//Output
//For each dataset, write in one line 1 or 0 if the expression is correct or not respectively.
//
//Example
//input
//2
//([]())
//()()()[}
//output
//1
//0

#include<iostream>
#include<string>
#include<stack>
#include<vector>
 
using namespace std;
 
bool tachXau(string s)
{
	int len = s.size();
	stack <char>S;
	for (int i = 0; i< len; i++){
		char c = s[i];
		if(c == '(' || c == '[' || c == '{'){
			S.push(c);
		}
		else if(c == ')' || c == ']' || c == '}'){
			if(S.empty())
				return false;
			else
			{
				if(c == ')'){
					if(S.top() != '(')
						return false;
				}
				if(c == ']'){
					if(S.top() != '[')
						return false;
				}
				if(c == '}'){
					if(S.top() != '{')
						return false;
				}
				S.pop();			}
		}
	}
	if(S.empty()){
		return true;
	}
	else
		return false;
}
 
int main()
{
	vector <string> v;
	int n = 0;
	cin >> n;
	for (int i = 0; i< n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	for (int j = 0; j<n; j++)
	{
		int result = tachXau(v[j]);
		cout<<result<<endl;
	}
	return 0;
}
