#include <bits/stdc++.h>
using namespace std;

#define MAX_NUM 100

//エラトステネスの篩　100までの素数を出力する
int main(){

    int prime_array[MAX_NUM] = {0};
    int i;

    //初期値設定。0番目は除外する
    for(i = 1; i < MAX_NUM; i++){

        prime_array[i] = 1;
    }

    for(i = 0;i < sqrt(MAX_NUM); i++){
        
        if(prime_array[i] == 1){
            //配列との数の差を埋める
            int num = i + 1;
            int j;
            
            for(j = num * 2 - 1; j < MAX_NUM; j += num){

                prime_array[j] = 0;
                
            }
        }
    }

    //出力
    for(i = 0; i < MAX_NUM; i++){

        if(prime_array[i] == 1){
            cout << i + 1 << "は素数です" << endl;
        }
    }
}