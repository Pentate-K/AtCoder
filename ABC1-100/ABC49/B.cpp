#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    vector<vector<char>> C(110, vector<char>(110));
    vector<vector<char>> ans(220, vector<char>(110));
    cin >> H >> W;

    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            cin >> C[i][j];
        }
    }

    for(int i=1; i<=2*H; i++){
        for(int j=1; j<=W; j++){
            ans[i][j] = C[(i+1)/2][j];
        }
    }

    for(int i=1; i<=2*H; i++){
        for(int j=1; j<=W; j++){
            if(j == W){
                cout << ans[i][j] << endl;
            }else{
                cout << ans[i][j];
            }
            
        }
    }

}