/* 
    display string number from index with all length
    auth: Samreach
    date: 21-Oct-2020
*/
#include <iostream>
using namespace std;
void display (int a[], int index, int n) {
    int length = 1;
    while (length <= n) {
        for (int i=index; i<length; i++) cout << a[i] << " ";
        cout << endl;
        length++;
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i) cin >> a[i];
    for (int i=0 ; i<n; ++i)
        display(a, i, n);
}