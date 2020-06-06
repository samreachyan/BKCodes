//Trainning 5 Increase subseq
#include <bits/stdc++.h>
using namespace std; 
    
/* lis() returns the length of the longest   
  increasing subsequence in arr[] of size n */
int lis( int array[], int n )  
{  
    int lis[n]; 
   
    lis[0] = 1;    
  
    /* Compute optimized LIS values in  
       bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( array[i] > array[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
  
    return *max_element(lis, lis+n); 
}  
    
/* Driver program to test above function */
int main()  
{  
	int n;
	cin >> n;
	int array[n];
	for (int i = 0; i<n ; i++){
		cin >> array[i];
	}
	
	cout << lis(array, n) << endl;
  
    return 0;  
}
