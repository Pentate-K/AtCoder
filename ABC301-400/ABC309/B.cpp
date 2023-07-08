#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        for(int j=0; j<N; j++){
            if(s[j] == '0') A.at(i).at(j);
            else A.at(i).at(j) = 1;
        }
    }
    vector<vector<int>> B (N, vector<int> (N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            B[i][j] = A[i][j];
        }
    }
    int w = A[0][0];
    int x = A[0][N-1];
    int y = A[N-1][N-1];
    int z = A[N-1][0];
    for(int i=1; i<N; i++){
        A[0][i] = B[0][i-1];
    }
    for(int i=1; i<N; i++){
        A[i][N-1]= B[i-1][N-1];
    }
    for(int i=0; i<N-1; i++){
        A[N-1][i] = B[N-1][i+1];
    }
    for(int i=0; i<N-1; i++){
        A[i][0] = B[i+1][0];
    }
    A[1][N-1] = x;
    A[N-1][N-2] = y;
    A[N-2][0] = z;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){ 
            if(j==N-1){
                cout << A[i][j] << endl;
            } else{
                cout << A[i][j];
            }
        }
    }
}
