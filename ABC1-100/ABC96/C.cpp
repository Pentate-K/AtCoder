#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  bool judge = true;
  vector<vector<char>> s(55, vector<char>(55));
  for(int i=0; i<=H+1; i++){
    for(int j=0; j<=W+1; j++){
        s.at(i).at(j) = '-';
    }
  }
//   for(int i=0; i<H+1; i++){
//     for(int j=0; j<W+1; j++){
//        cout << s.at(i).at(j);
//     }
//   }

  for(int i=1; i<=W; i++){
    for(int j=1; j<=H; j++){
        cin >> s.at(i).at(j);
    }
  }
  for(int i=1; i<=W; i++){
    for(int j=1; j<=H; j++){
        // if((s.at(i).at(j) == '#' && s.at(i).at(j-1) != '#') && (s.at(i).at(j) == '#' && s.at(i).at(j+1) != '#') || (s.at(i).at(j) == '#' && s.at(i-1).at(j) != '#') || (s.at(i).at(j) == '#' && s.at(i+1).at(j) != '#')){
        //     judge = false;
        // }
        if(s.at(i).at(j) == '#'){
            if(s.at(i).at(j-1) != '#' && s.at(i).at(j+1) != '#' && s.at(i-1).at(j) != '#' && s.at(i+1).at(j) != '#'){
                judge = false;
                break;
            }
        }
    }
    
  }
  if(judge){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}