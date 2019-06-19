#include<iostream> 
#include<conio.h> 
using namespace std; 
struct Fract 
     { 
        int num; 
        int deno; 
      
      }; 
  
Fract sum(Fract,Fract); 
  
   int main() 
    { 
     int num1,deno1,num2,deno2; 
     cout<<"Enter fraction 1: numerator denominator:"; 
     cin>>num1>>deno1; 
     cout<<"Enter fraction 2:numerator denominator:"; 
     cin>>num2>>deno2; 
     
     Fract f1={num1, deno1};/* 1/2 */ 
     Fract f2 ={num2, deno2};/* 2/5 */ 
     Fract result = sum(f1, f2);//sum the fractions 
     cout<<result.num<<"/"<<result.deno;  //display the result 
  
     getch(); 
     return 0; 
    } 
    
    Fract sum(Fract f1, Fract f2) 
    { 
     Fract result={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno}; 
     return result; 
  
   } 
