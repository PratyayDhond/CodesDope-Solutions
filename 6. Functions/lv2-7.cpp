/*
Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input as well as the current date, in same format, and calculates your age in years, months and days. You must check for leap years also. Write a separate function to check for leap year.
*/

#include<iostream>
using namespace std;


class date{
    public:
    int year;
    int month;
    int day;
};

bool isLeap(int n){
    if(n % 4 != 0)
        return false;
    if(n % 100 == 0)
        if(n % 400 == 0)
            return true;
        else   
            return false;
    return true;
    
}

date solve(date d1, date d2){
    date result;
    result.year = d2.year - d1.year;
    if(d2.month < d1.month){
        result.year--;
        result.month = d2.month + 12 - d1.month;
    }else{
        result.month = d2.month - d1.month;
    }

    if(d2.day < d1.day){
        result.month --;
        int days;
        switch(d2.month){
            case 1:
                days = 31;
                break;
            case 2:
                if(isLeap(d2.year)){
                    days = 29;                    
                }else{
                    days = 28;
                }
                break;            
            case 3:
                days = 31;
                break;
            case 4:
                days = 30;
                break;
            case 5:
                days = 31;
                break;
            case 6:
                days = 30;
                break;
            case 7:
                days = 31;
                break;
            case 8:
                days = 31;
                break;
            case 9:
                days = 30;
                break;
            case 10:
                days = 31;
                break;
            case 11:
                days = 30;
                break;
            case 12:
                days = 31;
                break;
            default:
                days = 30;
                break;
        }
        result.day = d2.day + days - d1.day;
    }else{
        result.day = d2.day - d1.day;
    }
    return result;    
}

void print(date result){
    cout<<result.year<<" "<<result.month<<" "<<result.day<<"\n";
}

int main(){
  date d1,d2;
  cin>>d1.year>>d1.month>>d1.day;
  cin>>d2.year>>d2.month>>d2.day;

    print(solve(d1,d2));

}