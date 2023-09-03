#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int P[100010][3];
    int S[100010];
    int Sort[100010];
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            cin >> P[i][j];
            S[i] += P[i][j];
            Sort[i] = S[i];
        }
    }
    sort(Sort, Sort + N);
    reverse(Sort, Sort+N);
    int pivot = Sort[K-1];
    for(int i=0; i<N; i++){
        if(pivot - S[i] <= 300){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;           
        }
    }

}