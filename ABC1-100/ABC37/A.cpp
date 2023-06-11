#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int ans = 0;
    if(A < B){
        while(C >= A){
            ans++;
            C -= A;
        }
        if(C > B){
            while(C >= B){
                ans++;
                C -= B;
            }
        }
    } else{
        while(C >= B){
            ans++;
            C -= B;
        }
        if(C > A){
            while(C >= A){
                ans++;
                C -= A;
            }
        }
    }
    cout << ans << endl;
}