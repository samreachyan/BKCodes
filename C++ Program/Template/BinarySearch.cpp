#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;

int binarysearch(vector<int> vec, int key){
	int first =0 ; 
	int last = vec.size()-1;
	while(first <= last){
		int mid = (first+last)/2;
		if (key > vec[mid])
			first = mid+1 ;
		else if(key<vec[mid])
			last = mid - 1;
		else
			return mid;
	}
	return -(first + 1);
	
}

int main(){
	r:
		system("cls");
	vector <int> numbers;
	srand (unsigned (time(0)));
	for (int i=0 ; i<40; i++){
		numbers.push_back(rand()%100+1);
	}
	sort(numbers.begin() , numbers.end());
	for (int i=0; i<numbers.size() ; ++i){
		cout<<numbers[i]<<" ";
	}
	int key;
	cout<<"\nEnter a number to search: "; cin>>key;
	int retvalue = binarysearch(numbers, key);
	if (retvalue> -1)
		cout<<"\nFound number at : "<<retvalue<<endl;
	else
		cout<<"\nNOT Found....";
	getch();
	goto r;
}
