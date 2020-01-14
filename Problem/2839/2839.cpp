
#include <iostream>

using namespace std;

int main(){
    int num; // 전체 설탕 kg
    int cnt; // 전체 몇 봉지
    
    cin >> num;
    cnt = num / 5;
    if(num%5!=0)
    {
        for(;cnt>=0;cnt--){
            if((num-5*cnt)%3==0){
                    cnt+=(num-5*cnt)/3;
                    break;
            }
        }
    }
    cout << cnt;
    return 0;
}