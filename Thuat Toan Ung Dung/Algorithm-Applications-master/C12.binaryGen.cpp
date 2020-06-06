//Cho 1 m?t x�u nh? ph�n S d? d�i n. T�m x�u nh? ph�n k? ti?p c?a x�u S trong th? t? t? di?n.
//
//Input
//D�ng d?u 1 s? nguy�n duong n=104.
//
//D�ng th? 2 ghi n s? 0 ho?c 1 li�n ti?p nhau.
//
//Example
//input
//5
//00100
//output
//00101
//Note
//Ghi ra x�u nh? ph�n k? ti?p c?a x�u S tr�n m?t d�ng duy nh?t. N?u kh�ng t?n t?i th� ghi ra -1.

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
