#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    int ans = X+N;
    int count = 0;
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<N; i++){
        count = (D-1)/A.at(i);
        // cout << day << count << endl;
        while(count > 0){
            count--;
            ans++;
        }
    }
    cout << ans << endl;
}