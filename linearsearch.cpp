#include <bits/stdc++.h>
using namespace std;

//線形探索法
int main(){

int i;
unsigned char array[5] = {1,2,3,4,5};

for(i = 0;i < sizeof(array);i++){
    if(array[i] == 3){
        cout << "有" << endl;
    }else{
        cout << "無" << endl;
    }
}
    return 0;
} 