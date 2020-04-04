#include <bits/stdc++.h>
using namespace std;

//単純挿入法
int main(){

    int array[] = {5,7,2,3,1,4};

    int i;

    for(i = 1; i < sizeof(array) / 4; i++){

        int target_num;
        int k;

        //比較用数値
        target_num = array[i];
        //比較場所確認用
        k = i;
        
        while(0 < k && target_num < array[k - 1]){

            array[k] = array[k - 1];
            k--;
        }

        array[k] = target_num;
    }

    //ソート完了で出力
    int output_i;

    for(output_i = 0; output_i < (sizeof(array) / 4); output_i++){
        cout << array[output_i] << endl;
    }
}