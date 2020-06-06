//Vinh works for an ATM machine manufacturing company. 
//The basic functionality of an ATM machine is cash withdrawal. 
//When a user requests a cash withdrawal of W VND (Vietnamese Dong), 
//the ATM has to dispense N money notes such that they sum up to W. 
//For the next generation of ATM machines, Vinh is working on an algorithm to minimize 
//the number of N of money notes for each cash withdrawal transaction.
//
//Your task is to help Vinh to do his job given that the money notes come in the 
//values of 1000,2000,3000,5000,1000·101,2000·101,3000·101,5000·101,…,1000·10c,2000·10c,3000·10c,5000·10c 
//where c is a positive integer and Vinh has unlimited supply of money notes for each value.
//
//Input
//The input file consists of several datasets. 
//The first line of the input file contains the number of datasets which is a positive integer 
//and is not greater than 1000. The following lines describe the datasets.
//
//The first line consists of one positive integer W (W=1018);
//
//The second line consists of one positive integer c (c=15).
//
//Output
//For each dataset, write in one line two space-separated integers N and S 
//where S is the number of ways to dispense the fewest number N of money notes. 
//In case there is no way to serve the cash withdrawal request, write out 0 in one line instead.
//
//Example
//input
//2
//1000
//1
//7000
//1
//output
//1 1
//2 1


#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
ull fewestNumber=0;
 
ull countOfSols(ull w, ull c)
{
	//v1 luu so cach chon cac to tien sao cho it to tien nhat
	//v2 luu so to tien it nhat sau moi luy thua
	vector<ull> v1;
	vector<ull> v2;
	int flag = 0;
	// tmp: so luong dong 5000 * 10^c lon nhat can dung
	ull tmp = 0;
	if(w % (1000 ) != 0 || w <= 0)
		return 0;
	else{
		w = w / 1000;
		ull x = pow(10,c+1);
		ull p = pow(10,c);
		if(w >= x)
		{
			tmp = w / x;
			w = w % x;
			// xet so dau tien sau khi w % x
			ull i = w / p;
			if(i < 5 && i > 0)
			{
				tmp --;
				flag = 1;
				w = w + 5 * p;
			}
		}
		while(c != -1)
		{
			p = pow(10,c);
			ull a = w / p;
			// neu a = cac so sau thi co 1 cach chon a va can 1 to
			if(a == 1 || a == 2 || a == 3 || a==5){
				v1.push_back(1);
				v2.push_back(1);
			}
			
			// neu a = cac so sau thi co 1 cach chon a va can 2 to
			else if(a == 7 || a == 8)
			{
				v1.push_back(1);
				v2.push_back(2);
			}	
			// neu a == 4 hoac a == 6 thi co 2 cach chon a va can 2 to
			else if(a == 4 || a == 6)
			{
				v1. push_back(2);
				v2.push_back(2);
			}
				
			// neu a == 9 thi co  3 cach chon a va can it nhat 3 to
			else if(a == 9){
				v1.push_back(3);
				v2.push_back(3);
			}
			w = w % p;
			c--;
		}
	}
	ull result = 1;
	for(int i = 0; i < v1.size(); i++)
	{
		result *= v1[i];	
	}
	if(flag == 0)
		fewestNumber += tmp*2;
	else
		fewestNumber += tmp *2 + 1;
	for(int i = 0; i < v2.size(); i++)
	{
		fewestNumber += v2[i];
	}
	
	return result;	
}
 
int main()
{
	int n;
	cin >> n;
	ull M[n][2];
	for(int i = 0; i <n; i++)
	{
		cin >> M[i][0];
		cin >> M[i][1];
	}
	for(int i = 0; i < n; i++)
	{
		ull result = countOfSols(M[i][0], M[i][1]);
		if(result != 0)
			cout << fewestNumber << " " << result << endl;
		else
			cout << 0 << endl;
		//cout << fewestNumber ;
		fewestNumber = 0;
	}
	return 0;
}
