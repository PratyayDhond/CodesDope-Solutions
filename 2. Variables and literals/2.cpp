//Store two integers in two variables x and y. Print the product of the two.

#include<iostream>
using namespace std;

int product(int a, int b){
    return a * b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" * "<<b<<" = "<<product(a,b);
}