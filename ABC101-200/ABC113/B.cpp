#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, T, A;
    cin >> N;
    cin >> T >> A;
    double delta = 0.006;
    int H[1010];
    double Temp[1010];
    int ans = 0;
    for(int i=0; i<N; i++){
        cin >> H[i];
    }
    Temp[0] = abs(A - (T - H[0] * delta));
    double minimum = Temp[0];
    for(int i=1; i<N; i++){
        Temp[i] = abs(A - (T - H[i] * delta));  
        if(Temp[i] < minimum){
            ans = i;
            minimum = Temp[i];
        }
    }
    cout << ans + 1 << endl;
}