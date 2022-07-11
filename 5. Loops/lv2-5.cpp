/*
Write a program to find prime factor of a number.
If a factor of a number is prime number then it is its prime factor.
*/
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i < n/2; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

void solve(int n){

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            if(isPrime(i)){
                cout<<i<<"\n";
            }
        }
    }
}

int main(){
    int n;
    cin>> n;
    solve(n);
    return 0;
}