#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, P;
  cin >> N >> M >> P;
  int s = N - M;
  int ans = 0;
  while(s >= 0){
    ans++;
    s -= P;
  }
  cout << ans << endl;

}