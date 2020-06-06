
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<queue>
using namespace std;
 
unsigned long long Fib[100];
unsigned long long Fib2[100];
vector<string> Fibstr_vector;
 
unsigned long long fibonacci(int n)
{
	int i;
	for(i = 0; i< 2; i++)
		Fib[i] = 1;
	for(i = 2; i <= n; i++)
	{
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	return Fib[n];
}
 
unsigned long long fibonacci2(int n)
{
	int i;
	for(i = 0; i< 2; i++)
		Fib2[i] = i;
	for(i = 2; i <= n; i++)
	{
		if(i %2 == 0)
			Fib2[i] = Fib2[i-1] + Fib2[i-2];
		else
			Fib2[i] = Fib2[i-1] + Fib2[i-2] + 1;
	}
	return Fib2[n];
}
 
 
int count = 0; 
string fibonacci_string(int n)
{
	if(n >= Fibstr_vector.size()){
		if(count ==  0)
		{
			int i;
			string s0 = "0";
			string s1 = "1";
			Fibstr_vector.push_back(s0);
			Fibstr_vector.push_back(s1);
			for(int i = 2; i <= n; i++)
			{
				string s = Fibstr_vector[i - 1] + Fibstr_vector[i - 2];
				Fibstr_vector.push_back(s);
			}
		}
		else{
			string s = Fibstr_vector[n - 1] + Fibstr_vector[n - 2];
			Fibstr_vector.push_back(s);
		}
	}
	
	count ++;
	return Fibstr_vector[n];
}
 
int findString(string str, string str1)
{
	int i = 0;
	int count1 = 0;
	unsigned long long len = str.length();
	while(i != len)
	{
		int found = str.find(str1);
		if(found == -1)
			break;
		else{
			count1 ++;
			str = str.substr(found + 1);
			i+=found;
		}
	} 
	return count1;
}
 
 int kiemTra1(string s1, string s2, int lenP, string p)
{
	unsigned long long len1 = s1.length();
	unsigned long long len2 = s2.length();
	string str1;
	string str2;
	if(len1 < lenP - 1)
		str1 = s1;
	else
		str1 = s1.substr(len1 - lenP + 1, lenP-1);
		
	str2 = s2.substr(0, lenP-1);
	
	str1 = str1 + str2;
	
	return findString(str1, p);
}
 
 int kiemTra2(string s1, string s2, int lenP, string p)
{
	unsigned long long len1 = s1.length();
	unsigned long long len2 = s2.length();
	string str1, str2;
	if(len1 < lenP - 1)
		str1 = s1;
	else
		str1 = s1.substr(0, lenP-1);
	
	str2 = s2.substr( len2 - lenP + 1, lenP - 1);
	
	str2 = str2 + str1;
	
	return findString(str2, p);
}
 
int main()
{
	int i, j;
	for(i = 0; i< 100; i++){
		Fib[i] = 0;
		Fib2[i] = 0;
	}
	int index = 0;
	vector<int> v_int;
	vector<string> v_string;
	int N;
	string s;
	while(cin >>N)
	{
		v_int.push_back(N);
		cin >> s;
		v_string.push_back(s);
	}
	
	for(index = 0; index < v_int.size(); index++)
	{
		int n = v_int[index];
		string p = v_string[index];
		//cin >> n;
		cin >> p;
		
		if(n < 3 || p.length() < 3)
		{
			int result = findString(fibonacci_string(n), p);
			cout << "Case " << index+1 << ": " << result << endl;
			continue;
		}
		int number = 0;
		
		for(i = 0; i<= n; i++)
		{
			string Fistr;
			unsigned long long Fi = fibonacci(i);
			if(p.length() > Fi)
				continue;
			Fistr = fibonacci_string(i);
			if(Fistr.size() > 10000000){
				number=0;
				break;
			} 
			if(findString(Fistr, p) != 0)
			{
				number = 1;
				break;
			}
				
		}
		if(number != 0){
			string s1 = Fibstr_vector[i-1];
			string s2 = Fibstr_vector[i];
			int check0 = 0;
			if(s1.length() < p.length() - 1){
				check0 = kiemTra2(s1, s2, p.length(), p);
				s1 = Fibstr_vector[i];
				s2 = fibonacci_string(i+1);
				int check1 = kiemTra1(s1, s2, p.length(), p);
				int check2 = kiemTra2(s1,s2,p.length(), p);
				unsigned long long result = fibonacci(n - i) + check0*fibonacci(n-i-1) + check1 * fibonacci2(n - i-2) + check2*fibonacci2(n - i -1);
				
				//int c = findString(Fibstr_vector[n], p);
				//cout << "Test: "<<c<<endl;
				
				cout << "Case "<<index+1<<": " << result<<endl;
				
				continue;
			}
			
			int check1 = kiemTra2(s1, s2, p.length(), p);
			int check2 = kiemTra1(s1,s2,p.length(), p);
			unsigned long long result = fibonacci(n - i) + check1 * fibonacci2(n - i) + check2*fibonacci2(n - i -1);
			//int c = findString(Fibstr_vector[n], p);
				//cout << "Test: "<<c<<endl;
			cout << "Case "<<index+1 << ": " << result<<endl;
			
		}
		else{
			cout << "Case " << index+1 << ": " << "0"<<endl;
		}
	}
	return 0;
}
