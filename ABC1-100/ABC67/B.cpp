#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int l[55];
    for(int i=0; i<N; i++){
        cin >> l[i];
    }
    sort(l, l + N);
    int sum = 0;
    for(int i=N-1; i>=N-K; i--){
        sum += l[i];
    }
    cout << sum << endl;
}