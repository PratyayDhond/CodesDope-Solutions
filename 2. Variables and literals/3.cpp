//Write a C++ program to take two integer inputs from user and print sum and product of them.

#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int product(int a, int b){
    return a * b;
}

int main(){
  int x;
  int y;
  cin>>x>>y;
  cout<<x<<" + "<<y<<" = "<<sum(x,y)<<"\n"; 
  cout<<x<<" * "<<y<<" = "<<product(x,y); 
}