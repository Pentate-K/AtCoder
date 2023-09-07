#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  long long a[55], b[55], c[55], d[55];
  long long distance[55][55];
  long long mindistance[55];
  int ans[55];

  for(int i=1; i<=N; i++){
    for(int j=1; j<=M; j++){
       distance[i][j] = 0;     
    }
  }

  for(int i=1; i<=N; i++){
    mindistance[i] = 1000000010;
    ans[i] = 55;
  }

  for(int i=1; i<=N; i++){
    cin >> a[i] >> b[i];
  }
  for(int j=1; j<=M; j++){
    cin >> c[j] >> d[j];
  }
  for(int i=1; i<=N; i++){
    for(int j=1; j<=M; j++){
        distance[i][j] = abs(a[i]-c[j]) + abs(b[i]-d[j]);
    }
  }

  for(int i=1; i<=N; i++){
    for(int j=1; j<=M; j++){
        if(mindistance[i] == distance[i][j]){
            ans[i] = min(ans[i], j);
            continue;
        }
        mindistance[i] = min(mindistance[i], distance[i][j]);
        if(mindistance[i] == distance[i][j]){
            ans[i] = j;
        }
    }
  }

  for(int i=1; i<=N; i++){
    cout << ans[i] << endl;
  }

}