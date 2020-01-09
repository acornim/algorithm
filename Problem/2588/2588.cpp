// input 
// 472 
// 385

// output 
// 2360
// 3776
// 1416
// 181720

#include <iostream>

using namespace std;

int main(){
    int x,y,temp,result;
    cin >> x;
    cin >> y;
    result = x * y;
    while(y!=0){
        temp = y % 10;
        y = y / 10;
        cout << x * temp << endl;
    }
    cout << result;
    return 0;
}