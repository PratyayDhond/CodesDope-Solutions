#include<iostream>
using namespace std;

int power(int n){
    int pow = 1;
    for(int i = 0; i < n; i++){
        pow = pow * 2;
    }
    return pow;
}

int main(){
    int n;
    cin >> n;   
    // cout<< power(n);

   for(int i = n; i > 0 ; i--){
        int x = power(i-1);

        for(int k = 0; k < n - i; k++)
            cout<<" ";
        
        for( int j = 0; j < x; j++ ){
            cout<<"*";
        }
        cout<<"\n";
   }

   for(int i = 1; i < n; i++){
        int x = power(i);
//Printing spaces
//specified k = 1 as we are skipping the first iteration in this loop.
        for(int k = 1; k < n - i; k++)
            cout<<" ";
        
        for( int j = 0; j < x; j++ ){
            cout<<"*";
        }
        cout<<"\n";
        
   }
}