#include <bits./stdc++.h>
using namespace std;
int Find(int *a, int n, int b){
    int value=-1;
    int max_right=*max_element(a+2, a+(n-1));
    int max_left=a[0];
    for (int i=1; i<n-1; i++){
        max_left=max(max_left,a[i-1]);
        if (a[i]>max_right)
            max_right=*max_element(a+i+1, a+n-1);       
        if (max_left -a[i]>=b && max_right-a[i]>=b) {
            int x=max_left+max_right-2*a[i];
            if (value<x) value=x;
        }        
    }
    return value;
}
int main(){
    int n, b;
    cin>>n>>b;
    int *a= new int[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<Find(a,n,b);
    
}