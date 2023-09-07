#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N;
  int sum = 0;
  int ans[110];
  for(int i=1; i<=N; i++){
    ans[i] = 0;
  }
  int T[110], P[110], X[110], T2[110];
  for(int i=1; i<=N; i++){
    cin >> T[i];
  }
  cin >> M;
  for(int i=1; i<=M; i++){
    cin >> P[i] >> X[i];
  }
  for(int i=1; i<=N; i++){
    sum += T[i];
  }
  
  
//   cout << sum << endl;
  for(int j=1; j<=M; j++){
    T2[P[j]] = X[j];
    ans[j] = sum - (T[P[j]] - T2[P[j]]);
    cout << ans[j] << endl;
  }

}