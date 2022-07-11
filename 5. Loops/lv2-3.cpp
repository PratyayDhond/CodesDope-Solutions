/*
A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
Write all Armstrong numbers between 100 to 500.
*/
#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int num = n;
    int sum = 0;
    while(num != 0){
        int temp = num %10;
        num = num / 10;
        sum = sum + (temp*temp*temp);
    }
    if(sum == n)
        return true;
    return false;
}

int main(){
    for(int i = 100; i <= 500; i++){
        if(isArmstrong(i))
            cout<<i<<"\n";
    }    
return 0;    
}