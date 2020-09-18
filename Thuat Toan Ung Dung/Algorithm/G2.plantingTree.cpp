Farmer Jon has recently bought n tree seedlings that he wants to plant in his yard. 
It takes 1 day for Jon to plant a seedling: {Jon isn't particularly hardworking.}, 
and for each tree Jon knows exactly in how many days after planting it grows to full maturity. 
//Jon would also like to throw a party for his farmer friends, 
//but in order to impress them he would like to organize the party only after all the trees have grown.
// More precisely, the party can be organized at earliest on the next day after the last tree has grown up.
//
//Help Jon to find out when is the earliest day when the party can take place. 
//Jon can choose the order of planting the trees as he likes, 
//so he wants to plant the trees in such a way that the party will be as soon as possible.
//
//Input
//The input consists of two lines. The first line contains a single integer N (1=N=100000) 
//denoting the number of seedlings. Then a line with N integers ti follows (1=ti=1000000), 
//where ti denotes the number of days it takes for the ith tree to grow.
//
//Output
//You program should output exactly one line containing one integer, 
//denoting the earliest day when the party can be organized. 
//The days are numbered 1,2,3,… beginning from the current moment.
//
//Example
//input
//1
//1
//output
//3


#include<iostream>
 
using namespace std;
 
void swap(int *a, int *b){
	int *temp =a;
	a = b;
	b = temp;
}
  
int getNextGap(int n){
	int gap = n*10/13;
	if(gap < 1)
		return 1;
	return gap;
}
 
void combSort(int arr[], int n)
{
	int gap = n;
	bool swaped = true;
	
	while(gap != 1 || swaped == true)
	{
		gap = getNextGap(gap);
		
		swaped = false;
		
		for(int i = 0; i< n - gap; i++){
			if(arr[i] < arr[i+gap]){
				swap(arr[i], arr[i+gap]);
				swaped = true;
			}
		}
	}	
	
}
 
 
int main()
{
	int n;
	cin >> n;
	int M[n];
	int i,j;
	for(i =0; i< n; i++)	cin >> M[i];
	
	combSort(M, n);
	
	int max = M[0];
	int tmp = max;
	
	for(i = 1; i< n; i++)
	{
		tmp --;
		if(M[i] > tmp){
			tmp = M[i];
			max ++;
		}
	}
	cout << max + 2;
}
