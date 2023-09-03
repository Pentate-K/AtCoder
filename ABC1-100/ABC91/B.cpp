#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  array<string, 110> s, t;
  map<string, int> mp;
  int ans = 0;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> s.at(i);
  }

  cin >> M;
  for(int j=0; j<M; j++){
    cin >> t.at(j);
  }

  for(int i=0; i<N; i++){
    if(mp.count(s.at(i))){
        mp[s.at(i)]++;
    }else{
        mp[s.at(i)] = 1;
    }
    ans = max(ans, mp.at(s.at(i)));
  }

  for(int j=0; j<M; j++){
    if(mp.count(t.at(j))){
        mp[t.at(j)]--;
    }else{
        mp[t.at(j)] = -1;
    }
    ans = max(ans, mp.at(t.at(j)));
  }
  
  if(ans > 0){
    cout << ans << endl;
  }else{
    cout << 0 << endl;
  }


}