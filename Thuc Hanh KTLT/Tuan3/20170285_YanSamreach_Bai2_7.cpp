/* 
    date: 24-Nov-2020
*/
#include <bits/stdc++.h>
using namespace std;
struct state{
    int i, j, old_L;
    //# constructor
    state(int _i = 0, int _j = 0, int _L = 0):
        i(_i), j(_j), old_L(_L){}
};

int main() {
    int n, k;
    cin >> n >> k;
    int x[n+1];
    stack<state> s;
    //# number of consecutive suffix 1
    int L = 0;
    s.push(state(1, 0));
    while (!s.empty()){
        state &top = s.top();
        //# if a new binary sequence is found
        if (top.i > n){
            for (int i = 1; i <= n; ++i)
                cout << x[i] << " \n"[i == n];
            s.pop();
            continue;
        }
        
        //# Khu de quy
        // i: vi tri bit nhi phan
        // j: trang thai bit tai vi tri i
        // L: so bit 1 lien nhau cua day tu bit 1 den i-1
        
        // neu bit thu i la 1 thi lay ra L cua day 1->i-1;
        if(top.j){
          	L = top.old_L;
        }
        // Neu bit thu i > 1 thi bo qua
        if(top.j > 1){
          s.pop();
          continue;
        }
        // Neu bit i = 0 thi L cua 1->i-1 la 0, day so 1 lien tuc bi gian doan
        // Neu L + 1 = k va bit i la 1 thi khong thoa man de bai
        // Neu L + 1 = k va bit i la 0 thi van thoa man de bai
        if(L + 1 < k || top.j == 0){
          // gan gia tri bit i cho x[i]
		  x[top.i] = top.j;
		  
          top.old_L = L;
          L = top.j ? L + 1 : 0;
          // bit i+1 co gia tri 0
          s.push(state(top.i + 1, 0));
        }
        ++top.j;
    }
    return 0;
}