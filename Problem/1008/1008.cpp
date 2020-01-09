#include <iostream>

using namespace std;

int main(){
    double x,y;
    
    while(1){
        cin >> x >> y;
        if(x>0 && y<10 && y!=0){
            break;
    }else{
            continue;
        }
     }
    cout.precision(15);
    cout << x/y ;
    return 0;
}