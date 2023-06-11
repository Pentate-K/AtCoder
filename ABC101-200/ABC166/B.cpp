#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int ans = 0;
    vector<int> data(100);
    vector<int> snack(100);
    vector<vector <int>> haveSnack(100, vector<int>(100));
    for(int i = 0; i < K ; i++){
        cin >> snack.at(i);
        for(int j = 0; j < snack.at(i); j++){
            cin >> haveSnack.at(i).at(j);
        }
        for(int j = 0; j < snack.at(i); j++){
            data.at(haveSnack.at(i).at(j) - 1)++;
        }
    }
    for(int i = 0; i < data.size(); i++){
        if(i >= N){
            data.at(i)++;
        }
        if(data.at(i) == 0){
            ans++;
        }
    }
    cout << ans << endl;
}