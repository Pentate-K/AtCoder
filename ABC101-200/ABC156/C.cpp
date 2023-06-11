#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    
    int sum = 0;
    vector<int> X(100);
    for(int i = 0; i < N;i++){
        cin >> X.at(i);
        sum += X.at(i);
    }
    float p = (float)sum / N;
    int P;
    if(sum % N == 0){
        P = sum / N;
    }else {
        P = (int)(p + 0.5);
    }
    for(int i = 0; i < N; i++){
        ans += pow(X.at(i), 2) - 2 * X.at(i) * P + pow(P, 2);
    }
    // cout << sum << endl;
    // cout << p << endl;
    // cout << P << endl;
    cout << ans << endl;

}