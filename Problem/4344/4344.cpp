#include <iostream>
#include <string>
using namespace std;

int main(){
    int num; // 횟수
    int stdNum; //전체 학생 수
    int sum; // 전체 합계
    int stdCnt; //평균 넘은 학생 수 

    double average; //평균
    double stdRatio; //평균 넘은 학생수 백분율
    
    cin >> num;
    while(num!=0){
        sum = 0;
        stdCnt = 0;

        cin >> stdNum;
        if(stdNum == 0 )
            break;
        
        int* score = new int [stdNum]; // 동적할당
        if(!score)
            return 0;
        
        for(int i = 0 ; i< stdNum ; i++){
            cin >> score[i];
            sum += score[i];
        }
        average = (double)sum/stdNum;

        for(int i = 0 ; i< stdNum ; i++){
            if(average < score[i])
                stdCnt++;
        }
        stdRatio = ((double)stdCnt/stdNum)*100;

        cout.precision(3);
        cout << fixed << stdRatio << "%"<< endl;
        num--;

    }

    return 0;
}