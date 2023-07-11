#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<string> ans;
    for(int i=0; i<N; i++){
        cin >> S.at(i);
    }
    map<string, pair<int, bool>> mp;
    int freq = 0;
    for(int i=0; i<N; i++){
        if(mp.count(S.at(i))){
            mp[S.at(i)].first++;
        } else{
            mp[S.at(i)].first = 1;
            mp[S.at(i)].second = false;
        }
        freq = max(freq, mp[S.at(i)].first);
    }
    for(int i=0; i<N; i++){
        if(mp[S.at(i)].first == freq && mp[S.at(i)].second == false){
            ans.push_back(S.at(i));
            mp[S.at(i)].second = true;
        }
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans.at(i) << endl;
    }
}