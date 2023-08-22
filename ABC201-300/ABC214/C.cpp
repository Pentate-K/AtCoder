#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int index = 1;
    long long minT = 1000000000;
    long long S[200010], T[200010];
    long long dp[200010];
    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    for(int i=0; i<N; i++){
        cin >> T[i];
        minT = min(minT, T[i]);
        if(minT == T[i]){
            index = i;    
        }
    }
    
    dp[index] = T[index];
    for(int i=index+1; i<=index+N; i++){
        dp[i%N] = min(T[i%N], dp[(i-1)%N]+S[(i-1)%N]);  
         
    }
    
    for(int i=0; i<N; i++){
        cout << dp[i] << endl;
    }
}