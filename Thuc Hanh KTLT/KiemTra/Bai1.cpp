#include <bits/stdc++.h>
using namespace std;

int bac;
char tenDaThuc[2];
double BacDaThuc[2];
double GiaTriX[2];
double HeSoDaThuc[2][10];

int inputNumber() {
    // input 1
    cout << "Nhap da thuc thu 1"  << endl;
    cout << "Nhap ten da thuc : "; 
    cin >> tenDaThuc[0];
    
    cout << "Nhap bac cua da thuc : ";
    cin >> BacDaThuc[0];

    cout << "Nhap x : ";
    cin >> GiaTriX[0];

    for (int i = 0; i < BacDaThuc[0]; i++)
    {
        cout << "Nhap he so " << i+1 << " : ";
        cin >> HeSoDaThuc[0][i];
    }
    cout << endl;

    // input 2 

    cout << "Nhap da thuc thu 2"  << endl;
    cout << "Nhap ten da thuc : "; 
    cin >> tenDaThuc[1];
    
    cout << "Nhap bac cua da thuc : ";
    cin >> BacDaThuc[1];

    cout << "Nhap x : ";
    cin >> GiaTriX[1];

    for (int i = 0; i < BacDaThuc[1]; i++)
    {
        cout << "Nhap he so " << i+1 << " : ";
        cin >> HeSoDaThuc[1][i];
    }
    

    cout << endl << endl << endl;
}

void printFuction() {
    double sum = 0;
    cout << "Ban da chon xuat DS da thuc, Gia tri da thuc!" << endl;
    cout << "****************************************************" << endl;

    // out 1 
    cout << "Da thuc: " << tenDaThuc[0] <<"(x) = " ;
    
    for (int i = 0; i < BacDaThuc[0]; i++)
    {
        sum += HeSoDaThuc[0][i] * pow(GiaTriX[0], i+1);
        cout << HeSoDaThuc[0][i] << "x^" << i+1;
        if (HeSoDaThuc[0][i] > 0) cout << " + ";
    }
    
    cout << endl << "Gia tri Da thuc : " << tenDaThuc[0] << "(x) = " << sum << endl;

    // out put 2
    cout << "Da thuc: " << tenDaThuc[1] <<"(x) = " ;
    
    for (int i = 0; i < BacDaThuc[1]; i++)
    {
        sum += HeSoDaThuc[1][i] * pow(GiaTriX[1], i+1);
        cout << HeSoDaThuc[1][i] << "x^" << i+1;
        if (HeSoDaThuc[1][i] > 0 && i < BacDaThuc[1]-1) cout << " + ";
    }
    
    cout << endl << "Gia tri Da thuc : " << tenDaThuc[1] << "(x) = " << sum << endl;
}


int main() {
    cout << "Ho Ten : YAN Samreach" << endl;
    cout << "MSSV : 20170285" << endl << endl;
    int n=1, m;
    while(n) {
        cout << "****************************************************" << endl;
        cout << "** Chuong trinh quan ly cac da thuc " << endl;
        cout << "**     1. Nhap cac da thuc" << endl;
        cout << "**     2. In danh sach da thuc" << endl;
        cout << "**     3. Thoat" << endl;
        cout << "****************************************************" << endl;
        cout << "**     Nhap lua chon cua ban : " ;
        cin >> n;

        switch (n) {
            case 1:
                inputNumber();
                break;
            case 2: 
                printFuction();
                break;
            
            default:
                break;
        }
    }

    return 0;
}