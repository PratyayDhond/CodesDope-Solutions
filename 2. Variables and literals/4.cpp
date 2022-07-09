//Take two integer inputs from user. First calculate the sum of two then product of two. Finally, print the sum and product of both obtained results.

#include<iostream>
using namespace std;

int main(){
    int x,y;
    //input
    cin>>x;
    cin>>y;

    int sum = x + y;
    int product = x * y;

    cout<< sum + product<<"\n";
    cout<< sum * product;

}