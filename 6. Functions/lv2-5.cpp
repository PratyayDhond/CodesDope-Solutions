/*
Define a function to calculate power of a number raised to other i.e. ab using recursion where the numbers 'a' and 'b' are to be entered by the user
*/

#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b < 1)
        return 1;
    return a * pow(a,b-1);     
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}