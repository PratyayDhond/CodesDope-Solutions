/*
Write a program to find the sum of the even and odd digits of the number which is given as input.
*/
#include<iostream>
using namespace std;

void solve(int n){
    int sumOdd=0,sumEven=0;
    for(; n != 0 ;){
        int temp = n%10;
        n = n/10;
        if(temp%2 == 0)
            sumEven += temp;
        else
            sumOdd += temp;
    }
    cout<<"Sum of Even Digits = "<<sumEven<<"\n";
    cout<<"Sum of Odd Digits  = "<<sumOdd;
}

int main(){
    int n;
    cin>>n;
    solve(n);
}