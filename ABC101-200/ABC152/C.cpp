#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> P(200000);
    int ans = 0;
    int n;
    int p;
    for(int i = 0; i < N; i++){
        cin >> P.at(i);
        // n = 0;
        // while(P.at(n) > P.at(i)){
        //     n++;
        // }
        // if(n == i){
        //     ans++;
        // }
        if(i == 0){
            ans++;
            p = P.at(0);
        } else{
            p = min(p, P.at(i));
            if(p == P.at(i)){
                ans++;
            }
        }
    }
    
    cout << ans << endl;
}