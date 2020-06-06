#include <bits/stdc++.h>
#include <limits.h> 
using namespace std;
  
// A utility funtion to find maximum of two integers 
int max(int a, int b) { return (a > b)? a : b; } 
  
// A utility funtion to find maximum of three integers 
int max(int a, int b, int c) { return max(max(a, b), c); } 
  
// Find the maximum possible sum in arr[] auch that arr[m] is part of it 
int maxCrossingSum(int arr[], int l, int m, int h) 
{ 
    // Include elements on left of mid. 
    int sum = 0; 
    int trai_all = INT_MIN; 
    for (int i = m; i >= l; i--) 
    { 
        sum = sum + arr[i]; 
        if (sum > trai_all) 
          trai_all = sum; 
    } 
  
    // Include elements on right of mid 
    sum = 0; 
    int phai_all = INT_MIN; 
    for (int i = m+1; i <= h; i++) 
    { 
        sum = sum + arr[i]; 
        if (sum > phai_all) 
          phai_all = sum; 
    } 
  
    // Return sum of elements on left and right of mid 
    // returning only left_sum + right_sum will fail for [-2, 1] 
    return max(trai_all + phai_all, trai_all, phai_all); 
} 
  
// Returns sum of maxium sum subarray in aa[l..h] 
int maxSubArraySum(int arr[], int l, int h) 
{ 
   // Base Case: Only one element 
   if (l == h) 
     return arr[l]; 
  
   // Find middle point 
   int m = (l + h)/2; 
  
   /* Return maximum of following three possible cases 
      a) Maximum subarray sum in left half 
      b) Maximum subarray sum in right half 
      c) Maximum subarray sum such that the subarray crosses the midpoint */
   return max(maxSubArraySum(arr, l, m), 
              maxSubArraySum(arr, m+1, h), 
              maxCrossingSum(arr, l, m, h)); 
} 
  
/*Driver program to test maxSubArraySum*/
int main() 
{	
	int n; 
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) cin >> arr[i];
	
    int max_sum = maxSubArraySum(arr, 0, n-1); 
    printf("%d", max_sum); 
    getchar(); 
    return 0; 
} 
