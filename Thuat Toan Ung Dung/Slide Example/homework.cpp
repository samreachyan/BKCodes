#include <algorithm> 
#include <iostream> 
using namespace std; 
  
int main() 
{  
    int a[] = {10, 12, 5,8 }; 
  
    sort(a, a + 4); 
  
    for (int i = 0; i < 4; i++)  
        cout << a[i] << " "; 
  
    return 0; 
}
