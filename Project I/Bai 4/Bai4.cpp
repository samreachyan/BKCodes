
/*
	Professor : Pham Ngoc Hung
	Writher : YAN Samreach
	Subject : Project I (Bai 2).
	Title : infix to postfix and prefix
	Data : 20/11/2019
*/
#include<iostream>
#include<stack>
#include<bits/stdc++.h> 
using namespace std;

int uT( char c ){ // tra ve muc do uu tien cua cac toan tu
    if( c == '(') return 0;
    if( c == '+' || c == '-' ) return 1;
    if( c == '*' || c == '/' || c == '%' ) return 2;
    if( c == '^' ) return 3;
}

string hauTo(string str){ // chuyen bthuc trung to sang hau to.
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
                // cout<< str1;
                str1 = "";
                if( c == '(' ) s.push(c);
                else{
                    if( c == ')') {
                        while( s.top()!= '('){
                            store += s.top();
                            // cout<< s.top();
                            s.pop();
                        }
                        if(s.top() == '(' ) {
                            s.pop();
                        }
                    }
                    else{
                        while( !s.empty() && uT(c) <= uT(s.top())){
                            // cout<< s.top();
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
        // cout<< str1;
    }
    while(!s.empty()){
        if(s.top()!= '(') {
            store += s.top();
            // cout<< s.top();
            s.pop();
        }
    }
    // cout << endl << store;
    return store;
}

string TienTo(string str){
    int i = 0;
    reverse(str.begin(), str.end());

    while ( i < str.length()){
        if ( str[i] == '(') str[i] = ')';
        else if ( str[i] == ')') str[i] = '(';
        i++;
    }
    str = hauTo(str);
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string s = "2+3*6";
    cout <<"Postfix : " << hauTo(s) << endl;
    cout <<"Prefix : " <<TienTo(s);
    return 0;
}

