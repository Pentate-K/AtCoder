#include <bits/stdc++.h>
using namespace std;

int n = 1;
int gcd(int a, int b){
    
    if(a < b){
        int c = b / a;
        int d = b - a * c; // b = a * c + d
        if(b % a == 0){
            n = a;
        }else{
            n = gcd(d, a);
        }
    } 
    return n;
}
int main(){
    int W, H;
    cin >> W >> H;
    // cout << gcd(W, H) << endl;
    cout << W / gcd(H, W) << ":" << H / gcd(H, W) << endl; 
}