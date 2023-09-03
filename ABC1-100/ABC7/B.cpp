#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if(s.size() == 1){
    if(s == "a"){
        cout << -1 << endl;
    }else{
        cout << 'a' << endl;
    }
  } else{
    s.erase(s.size()-1);
    cout << s << endl;
  }
}