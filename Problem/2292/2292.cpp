#include <iostream>

using namespace std;

int main(){
    int roomNum; // 방 번호
    int cnt = 1; // 현재 카운트 
    int num = 1; //현재 위치 
    cin >> roomNum;

    while(num<roomNum){
        num += cnt*6;
        cnt++; 
    }   
    cout << cnt;
    return 0;
}