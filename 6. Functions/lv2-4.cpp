/*
Define a function named 'perfect' that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
[An integer number is said to be "perfect number" if its factors, including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3].
*/
// Used vector because I was just bored and curious for vectors XD.
#include<iostream>
#include<vector>
using namespace std;

vector<int> factorial(int n){
    vector<int> arr;
    
    for(int i = 1; i < n; i++)
        if(n % i == 0)
            arr.push_back(i);
    return arr;
}

bool perfect(int n){
    vector<int> arr = factorial(n);
    for(int i = 0; i < arr.size(); i++){
        n = n - arr[i];
    }  
    if(n == 0)
        return true;
    return false;

}

int main(){
    for(int i = 1; i <= 1000; i++ ){
        if(perfect(i))
            cout<<i<<endl;    
    }
}