#include<iostream>
using namespace std;
//there are two types of header files:
// 1. System header files: it is written by the programmer
// 2. user defined header files: it is written by the programmer
int main()
{ 
    int a=4,b=3;
    cout<<"Following are the operators in C++";
    //Arithmetic operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;
    //Assignment operators
    // int a=3,b=9;
    // char d='d';
    
    //Comparison Operators
    cout<<"Following are the comparision operators in C++ \n";

    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<endl;

   //Logical Operators
    cout<<"Following are the logical operators in C++ \n";

    cout<<"The value of this logical and operator ((a==b) && (a<b))is:"<<((a==b) && (a>b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b))is:"<<((a==b) || (a>b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b) is:"<<(!(a==b))<<endl; 
    return 0;
}

