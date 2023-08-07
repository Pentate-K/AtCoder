#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;
    map<string, int> mp;
    vector<string> S(200000);
    for(int i=0; i<N; i++){
        cin >> S.at(i);
        if(mp.count(S.at(i))){
            mp[S.at(i)]++;
            cout << S.at(i) << "(" << mp[S.at(i)] << ")" << endl;
        }else {
            mp[S.at(i)] = 0;
            cout << S.at(i) << endl;
        }
       
        
    }
    for(int i=0; i<N; i++){
        
    }
}