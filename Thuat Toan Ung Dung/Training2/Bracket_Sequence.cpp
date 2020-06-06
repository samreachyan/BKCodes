#include<bits/stdc++.h>
using namespace std;

int Dung (char first,char second)
{
	if(first == '(' && second == ')') return 1;
	else if(first == '[' && second == ']') return 1;
	return 0;
}
int Check(string s) {
	stack<char> S;
	for(int i = 0 ; i < s.length() ; i++) {
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
			S.push(s[i]);
		else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
			if( S.empty() || ! Dung(S.top() , s[i]))
				return 0;
			else
				S.pop();
		}
	}
	return S.empty() ? 1 : 0;
}


int main() {
	string xau;
	cin>>xau;
	if(Testing(xau))
		cout<<"1" << endl << xau;
	else
		cout<<"0";
}
