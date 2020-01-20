// Mon Jan 20 2020 단어의 개수
#include <iostream>
#include <cstring>
using namespace std;
string str_arr[1000];
int str_cnt;

int main(){
string n;
int cnt = 0;
bool space = true;
getline(cin,n);

for(int i=0;i<n.length();i++){
    if(n[i]== ' ')
        space = true;
    else if(space){
        space = false;
        cnt++;
    }
}

cout << cnt << '\n';
return 0;
}