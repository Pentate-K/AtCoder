#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> T(N);
    int ans = 101;
    for(int i=0; i<N; i++){
        cin >> T.at(i);
        ans = min(ans, T.at(i));
    }
    cout << ans << endl;

}