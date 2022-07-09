//Take a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the number TAKEN.
//For example, if the number which was taken is 5696, then the displayed number should be 7818.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = n;
    vector<int> arr = {};

    while(num != 0){
        int temp = num % 10;
        num = num / 10;
        arr.push_back((temp + 2)%10);
    }

    for( int i = arr.size() -1 ; i >= 0; i -- )
        cout<< arr[i];

return 0;
}