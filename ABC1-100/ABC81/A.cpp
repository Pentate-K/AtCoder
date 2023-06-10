#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    // if(a < 100 || a > 999){
    //     cout << "NO" << endl;
    // }
    int ans = 0;
    int b = a / 100;
    int c = (a - b * 100) / 10;
    int d  = (a - b * 100 - c * 10);
    if(b == 1){
        ans++;
    }
    if(c == 1){
        ans++;
    }
    if(d == 1){
        ans++;
    }
    cout << ans << endl;
}