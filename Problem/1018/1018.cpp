//브루트 포스 체스판 다시 칠하기

#include<iostream>
#include<algorithm>

using namespace std;
char input[50][50];
char board[8][8];

int minChange(){
    int cntBW = 0, cntWB = 0;
   
    for(int i=0;i<8;i++){
        for(int j = 0 ;j < 8 ; j++){
            if((i+j)%2==0 && board[i][j]=='B') //(0,0)blackboard
                cntBW++;
            if((i+j)%2==1 && board[i][j]=='W') //(0,1)blackboard
                cntBW++;
            if((i+j)%2==0 && board[i][j]=='W') //(0,0)whiteboard
                cntWB++;
            if((i+j)%2==1 && board[i][j]=='B') //(0,0)blackboard
                cntWB++;
        }
    }
    return min(cntBW, cntWB);
}
int main(){
    int N,M;
    int result = 987654321;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            cin >> input[i][j];
    }
       
    for(int i = 0 ; i + 8 <= N ; i++){
        for(int j = 0 ;j + 8 <=M ; j++){
            //8 * 8 체스판으로 나누어주기 
            for(int x=0;x<8;x++){
                for(int y = 0 ; y < 8 ; y++){
                    board[x][y]= input[x+i][y+j];
                }
            }
        result = min(result,minChange());
        
        }
    }
    cout << result <<'\n';
    return 0;
}