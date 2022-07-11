/*
Calculate the sum of digits of a number given by user. E.g.-
INPUT : 123        OUPUT : 6
INPUT : 12345        OUPUT : 15
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for( ; n != 0; ){
        int temp = n %10;
        ans += temp;
        n = n / 10;
    }
    cout<<ans;
}