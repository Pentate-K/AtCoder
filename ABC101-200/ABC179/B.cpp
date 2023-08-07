#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    cin >> N;
    string ans = "No";
    vector<vector<int>> D (N, vector<int>(2));
    if(N == 0 || N == 1 || N== 2){
        ans = "No";
    }else{
        for(int i=0; i < N; i++){
        for(int j=0; j<2; j++){
            cin >> D.at(i).at(j);
        }
    }
    for(int i=0; i < N-2; i++){
        if(D.at(i).at(0) == D.at(i).at(1) && D.at(i+1).at(0) == D.at(i+1).at(1) && D.at(i+2).at(0) == D.at(i+2).at(1)){
            ans = "Yes";
        } 
    }
    cout << ans << endl;
    }

    
    
}