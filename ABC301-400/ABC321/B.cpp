#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X;
    int A[110], B[110];
    int ans = -1;
    cin >> N >> X;
    for(int i=1; i<=N-1; i++){
        cin >> A[i];
    }
    for(int i=0; i<=100; i++){
        for(int j=1; j<=N-1; j++){
            B[j] = A[j];
        }
        int point = i;
        B[N] = i;
        sort(B+1, B+N+1);
        int sum = 0;
        for(int j=2; j<=N-1; j++){
            sum += B[j];
        }
        if(sum >= X){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}