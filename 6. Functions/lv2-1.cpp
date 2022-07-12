/*
Print the multiplication table of 15 using recursion.
*/
#include<iostream>
using namespace std;

void printTable(int n, int t){
    if(t > 1)
        printTable(n,t-1);
    
        cout<<n<<" * "<<t<<" = "<<n*t<<"\n";
    
}

void solve(int n){
    printTable(n,10);
}

int main(){
    int n;
    cin>>n;
    solve(n);
}