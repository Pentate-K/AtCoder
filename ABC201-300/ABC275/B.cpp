#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    long long d = 998244353;
    A %= d;
    B %= d;
    C %= d;
    D %= d;
    E %= d;
    F %= d;
    long long p = ((((A*B % d) *C) % d) - (((D*E % d) *F) % d)) % d;
    if(p < 0){
        p += d;
    }
    cout << p << endl;
}