#include <bits/stdc++.h>
using namespace std;

//二分探索法

int main(){

    //探索するデータ
    int array[] = {1,3,4,5,8,12,15};
    //探索したい値
    int target_num = 12;

    int top = 0;
    int center;
    int bottom = sizeof(array) / sizeof(int) - 1;

    while(1){
                if(top > bottom){
                    cout << target_num << "は見つかりませんでした" << endl;
                    break;
                }
                
                center = (top + bottom) / 2;
                
                if(array[center] == target_num){
                    cout << target_num << "はarray[" << center << "]の中にありました。" << endl;
                    break;
                }else{
                    if(array[center] < target_num){
                        top = center + 1;                   
                    }else{
                        bottom = center - 1;
                    }
                }
            }
            
    return 0;
}