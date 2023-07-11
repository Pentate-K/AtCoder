#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> R(Q);
    vector<int> L(Q);
    vector<long long> T(Q);
    vector<long long> ans(N); 
    for(int i=0; i<N; i++){
        ans.at(i) = 0;
    }
    for(int i=0; i<Q; i++){
        cin >> L.at(i) >> R.at(i) >> T.at(i);
    }
    // for(int i=0; i<Q; i++){
    //     cout << L.at(i) << R.at(i) << T.at(i) << endl;
    // }

    for(int i=0; i<Q; i++){
        for(int j=L.at(i)-1; j<R.at(i); j++){
            ans.at(j) = T.at(i);
        }
    }
    for(int i=0; i<N; i++){
        cout << ans.at(i) << endl;
    }
}