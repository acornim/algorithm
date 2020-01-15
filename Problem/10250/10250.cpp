#include <iostream>

using namespace std;

int main(){
    int h, w, n; // 호텔의 층수, 각 층의 방수, 몇번 째 손님
    int roomX, roomY; // 호수, 층수
    int num; //실행횟수
    cin >> num;
    while(num--){
    cin >> h >> w >> n;
    roomY= n % h; //층수
    if(roomY==0){
        roomY=h;
    }
    if(n % h == 0){
        roomX = n / h; //호수
    }else if( h > n){
        roomX = 1;
    }else {
        roomX = n / h + 1;
    }

    if (roomX < 10)
			printf("%d0%d\n", roomY, roomX);
		else
			printf("%d%d\n", roomY, roomX);


    }
    return 0;
}