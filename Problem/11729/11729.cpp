// Mon Jan 20 2020 하노이 탑 쌓기 
#include <iostream>

using namespace std;
void hanoi(int n, int start, int mid, int end){
    if(n==1)
        cout << start << " " << end << '\n';
    else{
        hanoi(n - 1, start, end, mid); //n-1 원판들 -> 2번기둥
        cout << start << " " << end << '\n'; //1번 기둥의 n번째 원판 -> 3번 기둥으로
        hanoi(n - 1, mid, start, end); //2번 기둥의 n-1개의 원판들 -> 3번 기둥으로
    }
        
}
int main(){
    int n; //원판 갯수
    cin >> n;

    cout << (1 << n) - 1 << '\n';  // (1 << n)은 shift operation! 

    hanoi(n,1,2,3);
    return 0;
}