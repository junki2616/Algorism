#include <bits/stdc++.h>
using namespace std;

//選択ソート
int main(){

    int i;
    int index;
    int k;
    int array[] = {8,4,10,6,5,4,2};

    for(i = 0; i < (sizeof(array) / 4); i++){
        index = i;
        k = i + 1;

        //配列は最大でk-1まで
        if(k < (sizeof(array) / 4)){
            for(k; k < (sizeof(array) / 4); k++ ){
                if(array[k] < array[index]){
                    int temp;

                    temp = array[k];
                    array[k] = array[index];
                    array[index] = temp;
                }
            }
        }
    }

    //ソート完了で出力
    int output_i;

    for(output_i = 0; output_i < (sizeof(array) / 4); output_i++){
        cout << array[output_i] << endl;
    }
}
