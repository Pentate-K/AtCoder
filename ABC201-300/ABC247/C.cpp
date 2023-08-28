#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(20);
    S.at(0) = "1";
    for(int i=1; i<N; i++){
        string n = to_string(i+1);
        S.at(i) = S.at(i-1) + " " + n + " " + S.at(i-1);
    }
    cout << S.at(N-1) << endl;
}