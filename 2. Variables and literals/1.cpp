//Store two integers in two variables x and y. Print the sum of the two.
#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
  int x;
  int y;
  cin>>x>>y;
  cout<<x<<" + "<<y<<" = "<<sum(x,y); 
}