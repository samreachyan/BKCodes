/* 
    auth: Yann Samreach
    date: 3-Nov-2020
*/
#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator + (Complex a, Complex b) {
    Complex t;
    t.real = a.real + b.real;
    t.imag = a.imag + b.imag;
    return t;
}

Complex operator - (Complex a, Complex b) {
    Complex t;
    t.real = a.real - b.real;
    t.imag = a.imag - b.imag;
    return t;
}

Complex operator * (Complex a, Complex b) {
    Complex tmp;
    tmp.real = a.real * b.real - a.imag * b.imag;
    tmp.imag = a.imag * b.real + b.imag * a.real;
    return tmp;
}

Complex operator / (Complex a, Complex b) {
    Complex tmp;
    double norm = b.real * b.real + b.imag * b.imag;
    tmp.real = (a.real * b.real + a.imag * b.imag) / norm;
    tmp.imag = (a.imag*b.real - b.imag*a.real) / norm;
    return tmp;
}

ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;
    
    Complex a{real_a, img_a};
    Complex b{real_b, img_b};
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}