#include <bits/stdc++.h>
using namespace std;

struct bigNum
{
    char sign;
    string num;
}a, b, result;

bigNum calculate(bigNum a, bigNum b) {
    bigNum tmp;
    tmp = 

    return tmp;
}

int main() {
    string number1, number2;
    cin >> number1 >> number2;

    // store data
    int n1 = number1.length();
    int n2 = number2.length();
    
    a.num = number1.substr(1, n1);
    a.sign = number1[0];

    b.num = number2.substr(1, n2);
    b.sign = number2[0];

    cout << a.num << endl << b.num << endl ;
        
    result = calculate(a,b);

}