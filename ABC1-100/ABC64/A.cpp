#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int r , g, b;
    cin >> r >> g >> b;
    int x = 10 * g + b;
    if(x % 4 == 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}