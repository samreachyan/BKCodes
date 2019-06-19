#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

//int main()
//{
//	int n, i, j;
//
//     // Lay gia tri dau vao
//    cout<<" Enter so nguyen : ";
//    cin>>n;
//
//      cout<<"Danh sach cac so nguyen to la "<<n<<endl;
//
//     //vong lap for de tim so nguyen to
//
//     for (int i=2; i<n; i++)
//        for (int j=2; j*j<=i; j++)
//        {
//            if (i % j == 0)
//                break;
//            else if (j+1 > sqrt(i)) {
//                cout << i << endl;
//            }
//        }
//	getch();
//}

int main()
{

     // Khai bao bien
     int n;

     // Nhap gia tri dau vao
     cout<<"Nhap mot so :";
     cin>>n;

      cout<<"Danh sach cac so nguyen to la "<<n<<endl;

     //vong lap for de tim so nguyen to
     for (int i=2; i<n; i++)
     {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) cout << i<<" ";
      }
	
 }
