#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N;
    cin >> S;
    int ans = 0;
    for(int i=1; i<N; i++){
        int j = 0;
        ans = 0;
        while(S[j] != S[j+i] && (j+1)+i <= N){
            ans++;
            j++;
            
        }
        cout << ans << endl;
    }
    
}