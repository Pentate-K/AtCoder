#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 1;
    int n = int(sqrt(N));
    for(int i= 1; i <= n; i++){
        if(n * n <= N){
            ans = n * n;
        }
    }
    cout << ans << endl;
}