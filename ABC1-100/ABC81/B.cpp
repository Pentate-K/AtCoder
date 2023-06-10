#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    vector<int> A(200);
    vector<int> b(200);
    for(int i = 0; i < 200; i++){
        b.at(i) = 0;
    }
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    while(A.at(0) % 2 == 0){
        b.at(0)++;
        A.at(0) /= 2;
        ans = b.at(0);
    }
    for(int i = 1; i < N; i++){
        while(A.at(i) % 2 == 0){
            b.at(i)++;
            A.at(i) /= 2;
        }
        ans = min (ans, b.at(i));
    }
    cout << ans << endl;
    // for(int i = 0; i < N; i++){
    //     cout << b.at(i) << endl;
    // }
    // cout << min(b.at(0), b.at(1)) << endl;
    // cout << min(min(b.at(0), b.at(1)), b.at(2)) << endl;
}