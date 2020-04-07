#include <bits/stdc++.h>
using namespace std;

//最大公約数を求める

int main(){

    int x;
    int y;
    int z;

    cout << "xに整数を入力" << endl;
    cin >> x;

    cout << "yに整数を入力" << endl;
    cin >> y;

    if(x < y){       
        int temp;

        temp = x;
        x = y;
        y = temp;
    }

    z = x % y;

    while( z != 0){

            x = y;
            y = z;
            z = x % y;
    }

    cout << "最大公約数は"<< y << endl;
}