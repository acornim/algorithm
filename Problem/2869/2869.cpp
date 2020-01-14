#include <iostream>

using namespace std;

int main(){
    int V; // 전체 올라야할 길이 
    int a; // 낮동안 올아가는 길이 
    int b; // 밤동안 내려가는 길이
    long date=1; // 끝까지 올라가는데 걸린 일수
    cin >> a >> b >> V;

    if ( V == a){
        cout << date;
    }else{
        
        if((V-a)%(a-b)==0){
            date = (V-a)/(a-b) + 1;
        }else
        {
            date = (V-a)/(a-b)+2;
        }
        cout << date;
    }
    return 0;
}