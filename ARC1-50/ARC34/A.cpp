#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int A[3500], B[3500], C[3500], D[3500], E[3500];
    double E2[3500];
    double ans = 0;
    int index = 0;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i] >> E[i];
    }
    for(int i=1; i<=N; i++){
        double sum = ((double)A[i]) + ((double)B[i]) + ((double)C[i]) + ((double)D[i]) + E[i]*110/900;
        if(sum > ans){
            ans = sum;
            index = i;
        }
    }
    ans = ((double)A[index]) + ((double)B[index]) + ((double)C[index]) + ((double)D[index]) + ((double)E[index]*110/900);
    cout << setprecision(10) << ans << endl;

}