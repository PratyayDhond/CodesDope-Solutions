/*
Write a program to print all prime number in between 1 to 100.
*/

#include<iostream>
using namespace std;

bool solve(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i < n/2; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    for( int i = 1; i <= 100 ; i++){
        if(solve(i))
            cout<<i<<"\n";
    }
}