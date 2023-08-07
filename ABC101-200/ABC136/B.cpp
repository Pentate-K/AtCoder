#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    for(int i=1; i <= N; i++){
        if(i > 0 && i < 10){
            ans++;
        }else if(i > 99 && i < 1000){
            ans++;
        }else if(i > 9999 && i < 100000){
            ans++;
        }
    }
    cout << ans << endl;
}