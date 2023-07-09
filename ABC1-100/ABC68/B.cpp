#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 1;
    if(N == 1){
        ans = 1;
    } else if(N == 2 || N == 3){
        ans = 2;
    } else if(N >= 4 && N < 8){
        ans = 4;
    } else if(N >= 8 && N < 16){
        ans = 8;
    } else if(N >= 16 && N < 32){
        ans = 16;
    } else if(N >= 32 && N < 64){
        ans = 32;
    } else if(N >= 64 && N <= 100){
        ans = 64;
    }
    cout << ans << endl;
    
}