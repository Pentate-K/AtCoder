#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S[1010];
    int P[1010];
    cin >> N;
    int sum = 0;
    int Max = 0;
    int maxindex = 0;
    for(int i=0; i<N; i++){
        cin >> S[i] >> P[i];
    }
    for(int i=0; i<N; i++){
        sum += P[i];
        Max = max(Max, P[i]);
        if(Max == P[i]){
            maxindex = i;
        }
    }
    float rate = (float)P[maxindex] / (float)sum;
    // cout << rate << endl;
    if(rate > 0.5){
        cout << S[maxindex] << endl;
    } else{
        cout << "atcoder" << endl;
    }

}