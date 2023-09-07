#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<char>> s(55, vector<char>(55));
    vector<vector<char>> t(55, vector<char>(55));
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> s[i][j];
            t[i][j] = s[i][j];
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            // s[j][N-j+1] = t[i][j];
            s[i][j] = t[N-j+1][i];
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(j == N){
                cout << s[i][j] << endl;
            }else{
                cout << s[i][j];
            }
        }
    }
}