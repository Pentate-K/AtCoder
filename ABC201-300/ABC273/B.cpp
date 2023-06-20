#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    long long X;
    int K;
    cin >> X >> K;
    long long ans = 0;
    vector<int> keta(16) ;
    // reverse(begin(keta), end(keta));
    // for(int i = 0 ; i < 4; i++){
    //     cout << keta.at(i) << endl;
    // }
    int i = 0;
    while(X > 0){
        keta.at(i) = X % 10;
        X /= 10;
        i++;
    }
    // for(int x = 0; x < keta.size(); x++){
    //     cout << keta.at(x) << endl;
    // }
    reverse(begin(keta), end(keta));
    int j = 0;
    while(j < K){
        if(keta.at(15-j) >= 5){
            keta.at(15-j) = 0;
            keta.at(15 - (j+1) )++;
            j++;
        } else{
            keta.at(15-j)  = 0;
            j++;
        }
    }
    reverse(begin(keta), end(keta));
    double k = 0;
    while(int(k) < 16){
        ans += keta.at(k) * long(pow(10.0 , k));
        k++;
    }
    // cout << 3 * int(pow(10.0 , 7)) << endl;
    cout << ans << endl;
}