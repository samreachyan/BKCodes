//Cho 1 m?t xâu nh? phân S d? dài n. Tìm xâu nh? phân k? ti?p c?a xâu S trong th? t? t? di?n.
//
//Input
//Dòng d?u 1 s? nguyên duong n=104.
//
//Dòng th? 2 ghi n s? 0 ho?c 1 liên ti?p nhau.
//
//Example
//input
//5
//00100
//output
//00101
//Note
//Ghi ra xâu nh? phân k? ti?p c?a xâu S trên m?t dòng duy nh?t. N?u không t?n t?i thì ghi ra -1.

#include<iostream>
#include<string>
 
using namespace std;
 
 
int main()
{
	int n ;
	cin >>n;
	string binaryStr;
	cin >> binaryStr;
	int count = 0;
	for(int i = binaryStr.length() - 1; i >=0; i--)
	{
		if(binaryStr[i] == '0')
		{
			binaryStr[i] = '1';
			for(int j = i + 1; j < binaryStr.length(); j++)
			{
				binaryStr[j] = '0';
			}
			count ++;
			break;
		}
	}
	if(count == 0){
		int result = -1;
		cout << result;
	}
	else{
		cout << binaryStr.c_str();
	}
	
	return 0;
}
