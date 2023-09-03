#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int A[110], B[110], C[110], D[110];
  int S = 0;
  cin >> N;
  for(int i=1; i<=N; i++){
    cin >> A[i] >> B[i] >> C[i] >> D[i];
  }
  vector<vector<bool>> area(110, vector<bool>(110));
  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
        area[i][j] = false;
    }
  }
  for(int i=1; i<=N; i++){
    for(int k=A[i]; k<B[i]; k++){
        for(int l=C[i]; l<D[i]; l++){
            if(area[k][l] == false){
                S++;
                area[k][l] = true;
            }
        }
    }
  }
  

  cout << S << endl;
  

}