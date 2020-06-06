#include<iostream> 
#include<climits> 
using namespace std; 
  
int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
/*Driver program to test maxSubArraySum*/
int main() 
{ 
//    int a[] = {3, -1, -3, 5, 2 ,5, 0, -1, 5, 4}; 
//    int n = sizeof(a)/sizeof(a[0]); 
	int n; 
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) cin >> arr[i];

    cout << "Maximum contiguous sum is " << maxSubArraySum(arr, n); ; 
    return 0; 
} 
