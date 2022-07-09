// Write a program to calculate the sum of the first and the second last digit of a 5 digit.
//E.g.- NUMBER : 12345
//OUTPUT : 1+4=5

#include<iostream>
using namespace std;

int main(){
    
    bool flag = false;
    int n,num;
    int first, second_last;
    while(!flag){
        cout<<"Enter a 5 digit number : ";
        cin>>n;

        if(n > 99999 || n < 10000){
            flag = false;
            cout<<"Enter a five digit number!!!\n";
        }else
            flag = true;
    }
    num = n;
    int count = 0;
    while(n != 0){ 
        count++;
        int temp = n % 10;
        n = n / 10;
        if(count == 2){
            second_last = temp;
        }else if(count == 5){
            first = temp;
        }
    }

    cout<< first << " + " << second_last << " = " << first + second_last;

 return 0;   
}
