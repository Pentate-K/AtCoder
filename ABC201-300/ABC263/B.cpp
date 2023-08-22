#include <bits/stdc++.h>
using namespace std;
int N, P[55];

int ancestor(int x){
    int count = 0;
    while(P[x] != 1){
        int a = 0;
        x = P[x];
        count++;
    }
    if(P[x] == 1){
        count++;
    }
    return count;
}

int main(){
    
    // int dp[55];
    // int ans = 0;
    cin >> N;
    for(int i=2; i<=N; i++){
        cin >> P[i];
    }
    // for(int i=N; i>1; i--){
    //     while(P[i] == 1){
    //         dp[P[i]] = 1;
    //     }
    // }
    cout << ancestor(N) << endl;
}