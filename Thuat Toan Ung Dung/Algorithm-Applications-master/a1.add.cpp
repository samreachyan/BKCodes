//Cho hai s? nguyên a và b. Tính t?ng a+b
//Input
//G?m hai dòng, m?i dòng ghi m?t s? nguyên
//
//Output
//M?t dòng ch?a s? nguyên là k?t qu? bài toán
//
//Scoring
//0 <=a,b <=9×10^18 Có 50% test v?i a,b<=10^9


#include<bít/stdc++.h>
using namespace std;

typedef unsigned long long ull;
 
int main()
{
	//khoi tao a, b voi kieu dy lieu ull
	ull a = 0 , b = 0;
	cin>>a;
	cin>>b;
	ull SUM = 0;
	ull p = 10^18;
	
	//string de chua tong 2 so a,b
	stringstream sSUM;
	
	// Tach chu so dau cua a va b ra de cong rieng tranh 
	// truong hop bi tran so
	if(a >= p && b >= p){
		ull a_1 = a / p;
		ull a_2 = a % p;
		ull b_1 = b / p;
		ull b_2 = b % p;
		int count = 0;
		ull sum_1 = a_1 + b_1;
		ull sum_2 = a_2 + b_2;	
		for (int i = 0; i<18; i++){
			ull x = pow(10, i+1);
			int num_0 = sum_2 / (p/x);
			if(num_0 >= 1){
				count = i;
				break;
			}
			if(i == 17)
				count = 17;
		}
		
		
		if(sum_2 >= p){
			sum_1++;
			sum_2 = sum_2 % p;
		}
		sSUM<<sum_1;
		for (int j =0; j<count; j++){
			sSUM<<'0';
		}
		sSUM<<sum_2;
		cout<<sSUM.str()<<endl;
	}
	else{
		SUM = a+b;
		cout << SUM<<endl;
	}
	
	return 0;	
}
