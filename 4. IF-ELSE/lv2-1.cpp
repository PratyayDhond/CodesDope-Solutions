//Write a program to check if a year is leap year or not.
//If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.

#include<iostream>
using namespace std;

bool isLeap(int year){
    if(year % 4 != 0)   
        return false;
    if(year % 100 == 0)
        if(year % 400 == 0) 
            return true;
        else   
            return false;
    return true;
}

int main(){
    int year;
    cin>>year;
    bool ans = isLeap(year);
    cout<<ans;
}