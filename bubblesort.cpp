#include <bits/stdc++.h>
using namespace std; 

//バブルソート
int main(){

    int array[] = {6,1,3,9,2,4};

    int k;

    for(k = 0;k < (sizeof(array) / 4) - 1;k++){

        int i = (sizeof(array) / 4) - 1;

        while(k < i){

            if(array[i] < array[i - 1]){

                int temp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = temp;
            }

            i--;
        }
    }

    //ソート完了で出力
    int output_i;

    for(output_i = 0; output_i < (sizeof(array) / 4); output_i++){
        cout << array[output_i] << endl;
    }
}