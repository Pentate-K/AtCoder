#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N, M, C;
    cin >> N >> M >> C;
    vector<vector<int>> A(N, vector<int>(M));
    vector<int> B(M);
    int sum = 0;
    int ans = 0;
    
    for(int i = 0; i < M; i++){
        cin >> B.at(i);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A.at(i).at(j);
        }
    }
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         cout << A.at(i).at(j) << endl;
    //     }
    // }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            sum += A.at(i).at(j) * B.at(j);
        }
        
        sum += C;
        
        if(sum > 0){
            ans++;
        }
        sum = 0;
    }
    
        
    cout << ans << endl;

}