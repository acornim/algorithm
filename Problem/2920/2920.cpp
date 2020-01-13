#include <iostream>

using namespace std;

int main(){
    int array[8]= { };
    int asc=0,desc=0;
    for(int i=0 ;i<8;i++){
        std::cin >> array[i];
    }
for(int i = 0 ; i<4 ; i++){
    if(array[i]==i+1 && array[i]+array[7-i]==9){
        asc++;
    }else if(array[7 - i] == i+1 && array[i]+array[7 - i] == 9){
        desc++;
    }
}

if(asc==4){
    cout << "ascending";
}else if(desc ==4){
    cout << "descending";
}else
{
    cout << "mixed";
}
    return 0;
}