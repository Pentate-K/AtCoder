#include <bits/stdc++.h>
using namespace std;

int main() {
  const int INF = 2100100100;
  int R, C;
  cin >> R >> C;
  int sy, sx, gy, gx;
  cin >> sy >> sx >> gy >> gx;
  vector<vector<char>> c (55, vector<char>(55));
  vector<vector<int>> dist(55, vector<int>(55));

  dist.assign(R, vector<int>(C, INF));   // 初期化
  c.assign(R, vector<char>(C, '.'));
  for(int i=1; i<=R; i++){
    for(int j=1; j<=C; j++){
        cin >> c[i][j];
    }
  }
  
  queue<pair<int, int>> que;
  que.emplace(make_pair(sy, sx));
  dist[sy][sx] = 0;
  while(que.size() != 0){
    pair<int, int> state = que.front();
    que.pop();

    if(state.first == gy && state.second == gx){
        break;
    }

    int dy[4] = {0, 0, 1, -1};
    int dx[4] = {1, -1, 0, 0};
    for(int i=0; i<4; i++){
        pair<int, int> newstate = que.front();
        newstate.first = state.first + dy[i];
        newstate.second = state.second + dx[i];
        if(newstate.first < 0 || R <= newstate.first || newstate.second < 0 || C <= newstate.second) continue;
        if(c[newstate.first][newstate.second] == '#') continue;
        if(dist[newstate.first][newstate.second] != INF) continue;
        que.push(newstate);
        dist[newstate.first][newstate.second] = dist[state.first][state.second] + 1;
    }
  }

  cout << dist[gy][gx] << endl;
}