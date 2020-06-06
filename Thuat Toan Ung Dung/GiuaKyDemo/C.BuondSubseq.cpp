#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m,M;
	int *a;
	cin>>n>>m>>M;
	a=new int[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int result=0;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=i;j<=n;j++){
			sum+=a[j];
			if(sum<=M&&sum>=m){
				result++;
			}	
		}
	}
	cout<<result;
	return 0;
}
