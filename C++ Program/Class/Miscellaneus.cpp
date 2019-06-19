// Exercises: miscellaneous
// Exercise 2

#include<iostream>
using namespace std;

double maximun(double arr[], int len){
	double max=-100;
for(int i=0;i<len;i++){
	if (max>arr[i])
		max=arr[i];
    }
    return max;
}

double minimun(double arr1[], int len1){
	double min=100;
    for(int u=0;u<len1;u++){
	  if (min>arr1[u])
		min=arr1[u];
    }
    return min;
}

int main(){
 int length;
 cout <<"How many temperatures would you like to add?\n";
 cin >>length;
 double array[length];
 cout<<"\n\n Enter the temperatures:\n";
 for(int p=0;p<length;p++){
	cin>>array[p];
    }
 double maxT,minT;
 maxT= maximun(array, length);
 minT=minimun(array,length);

cout << "\n\n The max. temperature of the day is: " << maxT;
cout <<"\n The min. temperature of the day is :"<< minT;


}
