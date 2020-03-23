#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
    int x, i=0, n;
    string str;
    
    cin >> n;
    int num[n];
    
    getline(std::cin, str);
    stringstream ss(str);

    while (! ss.eof()) {
        ss >> x;
        num[i] = x;
        cout << "Num: " << x << endl;
        i++;
    }
    
    int kq =0;
    for (int i=0; i<n; i++)
    	kq += num[i];
    
    int result = pow(10,9)+7;
    
    cout << kq % result ;
    return 0;
}
