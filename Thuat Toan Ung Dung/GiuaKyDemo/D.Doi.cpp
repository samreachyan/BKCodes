#include <bits/stdc++.h>
using namespace std;
 
int n;
int sol1=0;
int sol2=0;
 
void solve()
{
	cin >> n;
	int a[n];
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for(int i=1; i<n-1; ++i)
    {
        // doi
        if(a[i-1]<a[i] && a[i+1]<a[i])
        {
            int j=i-1, k=i+1;
            int top=1;
            while(a[j]>a[j-1] && a[k]>a[k+1] && j>0 && k<n)
            {
                top++;
                j--; k++;
            }
            sol1 = max(top,sol1);
        }
        // lung
        if(a[i-1]>a[i] && a[i+1]>a[i])
        {
            int j=i-1, k=i+1;
            int down=1;
            while(a[j]<a[j-1] && a[k]<a[k+1] && j>0 && k<n)
            {
                down++;
                j--; k++;
            }
            sol2=max(sol2,down);
        }
    }
    cout << sol1 << " " << sol2;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
