#include <bits/stdc++.h>
using namespace std;

int n, m, Count, k;
int a[100], s[100];
void Ghinhan(){
    Count += 1;
    cout << "Tap con Thu " << Count << " : ";
    for (int i=1; i<=m ; i++)
        cout << a[i] << " ";
    cout << endl;
}

void MSet(){
    k=1;
    s[k] = 1;
    while(k>0){
        while(s[k] <=n-m+k){
            a[k] = s[k];
            s[k]++;
            if (k == m) Ghinhan();
            else {
                k++;
                s[k] = a[k-1]+1;
            }
        }
        k--;
    }
}

int main(){
    cout << "Nhap n, m = "; 
    cin >> n >> m;
    a[0] = 0;
    Count = 0;
    MSet();

    cout << "So tap con " << m << " phan tu cua tap " << n << " phan tu = " << Count << endl;
}
