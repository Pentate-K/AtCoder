#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  long long P;
  long long ans = 0;
  cin >> N >> D >> P;
  long long F[400030];
  for(int i=0; i<400030; i++){
    F[i] = 0;
  }
  for(int i=1; i<=N; i++){
    cin >> F[i];
  }
  sort(F+1, F+N+1);
  reverse(F+1, F+N+1);
  long long sumP[400030];
  for(int i=0; i<400030; i++){
    sumP[i] = 0;
  }
  int cnt = N;
  int l = 1;
  int j = 1;
  while(cnt > 0){
    for(int i=l; i<=D+l-1; i++){
        sumP[j] += F[i];
    }
    if(sumP[j] >= P){
        ans += P;
    }else{
        ans += sumP[j];
    }
    l += D;
    j++;
    cnt -= D;
  }
  cout << ans << endl;
}