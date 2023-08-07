#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    long long x, y;
    long long ans = 0;
    
    vector<pair<long long, long long> >a;
    for(int i=0; i < N; i++){
        cin >> x >> y;
		a.push_back({ x,y }); //ペアの配列を標準入力で受け取るときはこうしたほうがいいかも?
        
    }
    sort(a.begin(), a.end());
    // for(int i=0; i<N; i++){
    //     cout << a[i].first << a[i].second << endl;
    // }
    
    for(int i=0; i < N; i++){
        if(a[i].first > K){
            break;
        }else {
            K += a[i].second;
        }
    }
    cout << K << endl;

    //TLE
    // int j = 0;
    // while(K >= 0){
    //     while(a[j].first == ans){
    //         K += a[j].second;
    //         j++;
    //     }
    //     K--;
    //     ans++;
    // }
    // cout << ans-1 << endl;
}