/*
Using recursion, define a function to know nth term of a Fibonacci series.
Nth term of Fibonacci series is
F(n) = F(n-1)+F(n-2)
F(0) = 0
F(1) = 1
F(2) = F(1)+F(0) = 1+0 = 1
F(3) = F(2)+F(1) = 1+1 = 2
F(4) = F(3)+F(2) = 2+1 = 3
*/

#include<iostream>
using namespace std;

int solve(int n){
    if(n == 0)  
        return 0;
    if(n == 1)
        return 1;

    int a = 0, b = 1;
    for(int i=1; i <= n; i++ ){
        int temp = a + b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
}