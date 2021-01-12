#include <bits/stdc++.h>
using namespace std;

string s;
int tim;
int temp;
void sort(int a[], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+i];
                a[j+1] = temp;
            }
        }        
    }
}

int searchMe(char a[], char key, int n) {
    int size = strlen(s);
    int pos = 0;
    while (pos < size && a[pos] != key)
    {
        pos++;
    }
    if (pos >= size)
        tim = 0;
    else 
        tim = 1;
    return tim;
}

int main() {
    int arr[] = {6,4,8,3,2,1,0}, n=7;
    sort(arr, n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }    

    s = { 's', 'a', 'm', 'r', 'e' };
    cout << searchMe(s, 'r', 5) ;
}
