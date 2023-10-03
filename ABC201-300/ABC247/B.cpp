#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<string> s(110);
    vector<string> t(110);
    bool judge = true;
    map<string, int> S;

    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> s[i] >> t[i];
        if(S.count(s[i])){
            S[s[i]]++;
        }else{
            S[s[i]] = 1;
        }

        if(S.count(t[i])){
            S[t[i]]++;
        }else{
            S[t[i]] = 1;
        }
    }
    for(int i=1; i<=N; i++){
        if(s[i] == t[i] && S[s[i]] == 2){
            continue;
        }else if(S[s[i]] > 1 && S[t[i]] > 1){
            judge = false;
        }
    }

    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}