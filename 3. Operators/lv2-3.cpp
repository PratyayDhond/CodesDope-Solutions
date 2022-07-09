//Write a program to calculate the sum of the digits of a 3-digit number.
//Number : 132
//Output : 6

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;

    while(n != 0){
        sum += n%10;
        n = n / 10;
    }

    cout<<sum;
    return 0;
}