#include<iostream>
#include<stdlib.h>
using namespace std;

int a[100], n, p[100], s[100], i_max, ans=1;
FILE *f;

void create(FILE *f){
	f=fopen("data.txt","r");
	fscanf(f,"%d",&n);
	for (int i=1; i<=n ;i++){
		fscanf(f, "%d",&a[i]);
		cout<<a[i]<<" ";
	}
	fclose(f);
}

void trace(int i){
	if (p[i]==i){
		cout<<a[i];
		return;
	}
	else{trace(p[i]);
		 cout<<" "<<a[i];	 
	}
	
}
int main(){
	create(f);
	for (int i=1; i<=n; i++)	p[i]=i;  
	for (int i=1; i<=n; i++){
		s[i]=1;
		for (int j=i-1; j>=1; j--){
			if (a[j]<a[i]){				
				if(s[j]+1>s[i]){
					s[i]=s[j]+1;
					p[i]=j;
				}
										
			}			
		}
		if (s[i]>ans){
			ans =s[i];
			i_max=i;
		}
	}
	cout<<"\n"<<"do dai lon nhat: "<<ans<<endl<<"i_max= "<<i_max<<endl;
	for (int i= 1; i<=n; i++)
	cout<<p[i]<<"  ";
	cout<<"\n"<<"Day do la: ";
	
	trace(i_max);
	return 0;
}