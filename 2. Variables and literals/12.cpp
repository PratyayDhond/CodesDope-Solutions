//Take value of length and breath of a rectangle from user as float. Find its area and print it on screen after type casting it to int.

#include<iostream>
using namespace std;

int main(){
    float l,b;
    cin>>l;
    cin>>b;

    cout<< (int) (l * b);
}