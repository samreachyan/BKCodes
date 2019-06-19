#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;

template <typename T>
void display ( vector<T> v){ 
	for (int i=0 ; i<10; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	const int sizeNumber = 10;
	int numbers[]= {10,2,4,1,5,8,3,6,9,7};
	vector <int> nums(numbers, numbers + sizeNumber);
	display(nums);
	sort(nums.begin(), nums.end());
	display(nums);
}
