//Minh go shopping at the SS shop. 
//The shop has currency denominations: 1$, 5$, 10$, 50$, 100$, 500$. 
//Minh takes some items at the shop and pay an amount of 1000$. 
//Your task to devise a method to pay back amount to customer using fewest number of money notes.
//
//Input
//The input consists of only one single integer N (1=N=999) denoting the total value of the taken items.
//
//Output
//The output consists of only one single integer denoting the number of money notes.
//
//Examples
//input
//1
//output
//15
//input
//3
//output
//13

#include<iostream>
 
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int count = 0;
	n = 1000-n;
	int r;
	int M[6] = {1, 5, 10, 50, 100, 500};
	for(int i = 5; i>=0; i--)
	{
		if(n >= M[i]){
			r = n / M[i];
			n = n%M[i];
			count += r;
		}
	}
	cout << count;
	return 0;
}
