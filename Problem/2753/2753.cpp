// 윤년구하기
#include <iostream>

using namespace std;

int main(){
    int year;
    cin >> year;
    while(1){
        if(year >1 && year <4000){
            break;
        }else{
            continue;
        }
    }
    if(year){
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            cout << 1;
        else
        {
            cout << 0;
        }
        
    }
    return 0;
}