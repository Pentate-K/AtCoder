#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int A[100010], B[100010], C[100010];
    long long ans = 0;
    map<int, int> mp;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }
    for(int i=1; i<=N; i++){
        cin >> B[i];
    }
    for(int i=1; i<=N; i++){
        cin >> C[i];
    }

    for(int i=1; i<=N; i++){
        if(mp.count(B[C[i]])){
            mp[B[C[i]]]++;
        }else{
            mp[B[C[i]]] = 1;
        }
    }
    for(int i=1; i<=N; i++){
        if(mp.count(A[i])){
            ans += mp[A[i]];
        }else{
            mp[A[i]] = 0;
        }
    }
    cout << ans << endl;
}