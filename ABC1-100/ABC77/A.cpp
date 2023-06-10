#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<vector<char>> data(2, vector<char>(3));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> data.at(i).at(j);
        }
    }
    
    if(data.at(0).at(0) == data.at(1).at(2) && data.at(0).at(1) == data.at(1).at(1) && data.at(0).at(2) == data.at(1).at(0)){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}
