/*
	author: Yan Samreach
	date: 28-oct-2020
*/
#include <iostream>
using namespace std;

void allocate_mem(int ***mt, int m, int n){
    *mt = new int * [m];
    for(int i=0 ; i<m ; i++){
    	*(*mt+i) = new int[n];
	}
}

void input(int **mt, int m, int n){
    //#Input elements of the matrix
    for(int i = 0 ;i < m ;i++){
    	for(int j=0 ; j<n ;j++){
    		printf("mt[%d][%d] = ",i,j);
    		scanf("%d",(*(mt+i)+j));
		}
	}
}

void output(int **mt, int m, int n){
    //# Print all elements of the matrix
    for(int i=0; i<m ; i++){
    	for(int j=0; j < n ;j++){
    		cout << *(*(mt+i)+j) << " ";
		}
        cout << endl;
	}
}

int process(int **mt, int m, int n){
    int tong = 0;
    //# Calculate the sum of all even elements in the matrix
    for(int i=0; i<m ; i++){
    	for(int j=0; j<n ;j++){
    		if(mt[i][j] % 2 == 0) {
    			tong += *(*(mt+i)+j);
			}
		}
	}
    
    return tong;
}

void free_mem(int **mt, int m, int n){
    //# Free memory
    for(int i=0;i<m;i++){
    	delete[] mt[i];
	}
	delete[] mt;
}

int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d \n", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}