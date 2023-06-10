#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int j = 0;
    int ans = 1;
    bool b[100001];
    int a[100001];
    for(int i = 0; i < N; i++){
        cin >> a[i];
        
    }
    for(int i = 0; i < N; i++){
        b[i] = false;
    }
    b[X-1] = true;
    j = a[X-1];
    while(b[j-1] == false){
        b[j-1] = true;
        j = a[j-1];
        ans++;
    }
    cout << ans << endl;
}