//There are two jugs, a a-gallon one and a b-gallon one (a,b are positive integer). 
//There is a pump with unlimited water. Neither jug has any measuring marking on it. 
//How can you get exactly c-gallon jug (c is a positive integer)?
//
//Input
//The input file consists of several datasets. 
//The first line of the input file contains the number of datasets which is a 
//positive integer T and is not greater than 1000. 
//Each of T following lines consists 3 positive integer numbers a,b,c=108.
//
//Output
//For each dataset, write in one line one integer which is the minimum number of water movement steps to get c gallon. 
//Write -1 if there is no way to get c.
//
//Example
//input
//2
//3 8 5
//3 4 5
//output
//2
//-1
//Note
//There are half of total test cases having a,b,c=10^3


#include<iostream>
#include<queue>
 
using namespace std;
 
 
int gcd(int a, int b)
{
	if(b == 0)
		return a;
	gcd(b, a%b);
}
 
int water_jug(int a, int b, int c)
{
	int from = a;
	int to = 0;
	int count = 1;
	
	// do nuoc tu a sang b cho den khi b day hoac a trong
	// den khi trong 1 trong 2 binh bang c thi dung lai
	while(from != c && to != c)
	{
		int temp = min(from, b - to);
		from = from - temp;
		to = to + temp;
		count++;
		if(from == c || to == c)
			break;
		
		if(from == 0)
		{
			from = a;
			count ++;
		}
		if(to == b)
		{
			to = 0;
			count ++;
		}
	}
	return count;
}

// tinh so buoc nho nhat khi do tu a sang b va tu b sang a 
int minStep(int a, int b, int c)
{
	if(c > max(a, b))
		return -1;
	int UCLN = gcd(a,b);
	if(c % UCLN != 0)
		return -1;
	a = a / UCLN;
	b = b / UCLN;
	c = c / UCLN;
	return min(water_jug(a, b, c), water_jug(b, a, c));
	//return water_jug(b, a, c);
}
 
int main()
{
	int T;
	cin >> T;
	int arr[T][3];
	for(int i = 0; i< T; i++)
	{
		for(int j = 0; j< 3; j++)
			cin>>arr[i][j];
	}
	for(int i = 0; i< T; i++)
	{
		cout << minStep(arr[i][0], arr[i][1], arr[i][2]) << endl;;
	}
	return 0;
}
