/*
	Professor : Pham Ngoc Hung
	Writher : YAN Samreach
	Subject : Project I (Bai 4).
	Title : infix to postfix and prefix
	Data : 20/11/2019
*/
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int uT( char c ){ // tra ve muc do uu tien cua cac toan tu
    if( c == '(') return 0;
    if( c == '+' || c == '-' ) return 1;
    if( c == '*' || c == '/' || c == '%' ) return 2;
    if( c == '^' ) return 3;
}

string HauTo(string str){ // chuyen bthuc trung to sang hau to.
    stack<char> s;
    string str1 = "";
    int i = 0;
    string store = "";

    // cout << "Infix to Postfix(Hau to) : ";
    while( i < str.length() ){
        char c = str.at(i);
        if( c != ' ' ){
            if( c - '0' >= 0 && c - '0' <= 9 || isalpha(c) ) str1 += c;
            else{
                store += str1;
                str1 = "";
                if( c == '(' ) s.push(c);
                else{
                    if( c == ')') {
                        while( s.top() != '(' ){
                            store += s.top();
                            s.pop();
                        }
                        if(s.top() == '(' ) {
                            s.pop();
                        }
                    }
                    else{
                        while( !s.empty() && uT(c) <= uT(s.top())){
                            store += s.top();
                            s.pop();
                        }
                        s.push(c);
                    }
                }
            }
        }
        i++;
    }
    if( str1 != "" ){
        store += str1;
    }
    while(!s.empty()){
        if(s.top()!= '(') {
            store += s.top();
            s.pop();
        }
    }
    return store;
}

string TienTo(string str){
    int i = 0;
    reverse(str.begin(), str.end());

    while ( i < str.length()){
        if ( str[i] == '(' ) str[i] = ')';
        else if ( str[i] == ')') str[i] = '(';
        i++;
    }
    str = HauTo(str);
    reverse(str.begin(), str.end());
    return str;
}

// Tinh ket qua 
int calculate(int a, int b, char operatorSign) {
    if(operatorSign=='+')
        return a+b;
    else if(operatorSign=='-')
        return a-b;
    else if(operatorSign=='*')
        return a*b;
    else if(operatorSign=='/')
        return a/b;
    else if(operatorSign=='^')
        return pow(a,b);
}

// Tinh toan ra ket qua HauTo
int evaluatePostfix(string postfix) {
    stack <int> myStack;
    char ch;
    //1 2 3 ^ 4 * + 3 /
    for(int i=0; postfix[i] ; i++)
    {
        ch = postfix[i];
        if(ch >= '0' && ch <= '9') // kiem tra xem co phai la so ?
            myStack.push( ch - '0' ); //char to int conversion
        else //found operator
        {
            int a,b;
            b = myStack.top();  // lay gia tri top 
            myStack.pop();      // remove from stack

            a = myStack.top();
            myStack.pop();

            myStack.push(calculate(a, b, ch));
        }
    }

    return myStack.top();
}

void readFile(char * name){
    FILE * f = fopen(name, "r");

    cout << name << endl;
    string str;
    
    fclose(f);
    cout << str;
}

int main(int argc, char const *argv[]){
    string str = argv[1];
    string s = "";
    ifstream file;
    file.open(str);
    if ( !file ){
        cout << "Open error !" << endl;
        exit(1);
    } else {
        getline(file , s);
        cout << s << endl;
    }
    file.close();


    ofstream outfile ("CAL.OUT");
    outfile << "Infix : " << s << endl;
    outfile << "Postfix : " << HauTo(s) << endl;
    outfile << "Prefix : " << TienTo(s) << endl;
    int ketqua = evaluatePostfix(HauTo(s));
    outfile << "Result : " << ketqua << endl;
    outfile.close();

    cout << "Done ... !!!" << endl;
    return 0;
}

