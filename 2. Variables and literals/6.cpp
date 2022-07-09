//Write a C++ program to print an int, a double and a char on screen.

#include<iostream>
using namespace std;

int main(){
    int a;
    double b;
    char c;

    cin>>a>>b;
    fflush(stdin);
    cin>>c;
    cout<<a<<"\n"<<b<<"\n"<<c;
return 0; 
}