/*
	author: Yan Samreach
	date: 28-oct-2020
*/

#include<iostream>
using namespace std;

void InitMatrix(int ***m,int n) {
	*m = new int*[n];
	for(int i = 0 ; i < n ; i++)
      	*(*m+i) = new int[n];
}

void input(int **m, int n) {
	for(int i =0 ; i< n ; i++)
		for(int j =0 ; j< n ; j++)
			cin >> m[i][j];
}

void output(int **m, int n) {
	for(int i =0 ; i< n ; i++) {
		for(int j =0 ; j< n ; j++)
			cout << m[i][j] << " ";
   		cout << endl;
	}
}

void giaiphong(int **m,int n){
	for(int i=0 ; i<n; i++)
		delete[] m[i];
	delete[] m;
}

int ** tong(int **m1,int **m2,int n) {
	int ** sum;
	InitMatrix(&sum , n);
	for(int i=0; i<n; i++){
    	for(int j=0 ; j<n ;j++)
    		sum[i][j] = m1[i][j] + m2[i][j];
	}
	return sum;
}

int ** tich(int **m1, int **m2, int n) {
   int ** tich;
   InitMatrix(&tich, n);
   for(int i=0; i<n; i++)
    	for(int j=0 ; j<n ;j++){
    		tich[i][j]=0;
    		for(int k = 0 ; k < n; k++)
    			tich[i][j] += (m1[i][k] * m2[k][j]);
		}
   
   return tich;
}

int main(){
   int n;
   cin >> n;
	int **m1, **m2, **res, **sum;
	
	InitMatrix(&m1, n);
	InitMatrix(&m2, n);

	input(m1, n);
	input(m2, n);
   
	sum = tong(m1, m2, n);
	output(sum, n);

   	res = tich(m1, m2, n);
	output(res, n);

	giaiphong(m1, n);
	giaiphong(m2, n);
	giaiphong(res, n);
	giaiphong(sum, n);
}