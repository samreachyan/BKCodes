#include <bits./stdc++.h>
using namespace std;
int thongbao(int a[], int n, int p, int c){
    if(n==1|| n==0) return 0;
    int i=p-1;
    int increase=0;
    if (c==a[i] ) return 0; 
    if (i==0) {
        if (a[0]==a[1]) increase++;
        else if (c==a[1]) increase--;
    }
    //sua doan duong o giua
    else if (i<n-1){

        if (a[i-1]==a[i+1]){
            if ( a[i]!=a[i-1] && c==a[i-1]) increase-=2;
            if ( a[i]==a[i-1] ) increase+=2;
        }
        if (a[i-1]!=a[i+1]){
            if (a[i]!=a[i-1] && a[i]!=a[i+1]){
                if (c==a[i-1] || c==a[i+1]) increase--;
            }
            if (a[i]==a[i-1] && c!=a[i+1]) increase++;
            if (a[i]==a[i+1] && c!=a[i-1]) increase++;
        }
    }
    else{
        if (a[i]==a[i-1]) increase++;
        else if(c==a[i-1]) increase--;
    }
    a[i]=c;
    return increase;
}
int gap_ghenh_bandau(int a[], int n){
    int count=1;
    int p=a[0];
    for (int i=1; i<n; i++){
        if (a[i]!=p){
            count++;
            p=a[i];
        }
    }
    return count;
}

int main(){
    int n, Q;
    cin>>n;
    int *a=new int[n];
    for (int i=0; i<n ;i++){
        cin>>a[i];
    }
    cin>>Q;
    
    int first=gap_ghenh_bandau(a,n);
    for (int i=0; i<Q; i++){
        int p,c;
        cin>>p>>c;
        first+=thongbao(a,n,p,c);
        cout<<first<<endl;
    }
}