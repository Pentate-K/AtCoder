#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //Wrong Answer
    // int N;
    // cin >> N;
    // vector<int> A(N);
    // int ans = 0;
    // map<int, int> M;
    // for(int i = 0; i < N; i++){
    //     cin >> A.at(i);
    // }
    // sort.(A.begin(), A.end());
    // int sum = 0;
    // for(int i = 0; i < N; i++){
    //     int count = 0;
    //     int j;
    //     while(A.at(j) == A.at(j+1)){
    //         count++;
    //         j++;
    //     }
    // }
    // ans = (N * (N - 1) / 2) - sum;
    // cout << M.size() << endl;
    // cout << ans << endl;   
    
    
    long long n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    // for(auto &nx : a){cin >> nx;}
    long long ans = (n * (n-1)) / 2;
    map<int, long long> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    a.push_back(-1);
    long long cnt = 1;
    for(int i = 0; i < n; i++){
        if(a.at(i) != a.at(i+1)){
            ans -= (cnt * (cnt - 1)) / 2;
            cnt = 1;
        }
        else{
            cnt++;
        }
    }
    cout << ans << endl;


}