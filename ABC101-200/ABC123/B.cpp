#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    int AA = A;
    int BB = B;
    int CC = C;
    int DD = D;
    int EE = E;
    int ans = 0;
    while(AA % 10 != 0){
        AA++;
    }
    while(BB % 10 != 0){
        BB++;
    }
    while(CC % 10 != 0){
        CC++;
    }
    while(DD % 10 != 0){
        DD++;
    }
    while(EE % 10 != 0){
        EE++;
    }
    int x = 9;
    int last = 0;
    int a = A % 10;
    if(a != 0 && a <= x){
        last = A;
        x = a;
    }
    int b = B % 10;
    if(b != 0 && b <= x){
        last = B;
        x = b;
    }
    int c = C % 10;
    if(c != 0 && c <= x){
        last = C;
        x = c;
    }
    int d = D % 10;
    if(d != 0 && d <= x){
        last = D;
        x = d;
    }
    int e = E % 10;
    if(e != 0 && e <= x){
        last = E;
        x = e;
    }
    // cout << x << endl;
    if(last == A){
        ans = A + BB + CC + DD + EE;
    } else if(last == B){
        ans = AA + B + CC + DD + EE;
    } else if(last == C){
        ans = AA + BB + C + DD + EE;
    } else if(last == D){
        ans = AA + BB + CC + D + EE;
    } else if(last == E){
        ans = AA + BB + CC + DD + E;
    } else{
        ans = A + B + C + D + E;
    }
    cout << ans << endl;
}