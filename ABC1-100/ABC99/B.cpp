#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    int A = 1;
    int B = 3;
    cin >> a >> b;
    int ans = 0;
    for(int i=2; i<=999; i++){
        A += i;
        B += (i+1);
        if(A > a && B > b){
            while(a + ans != A && b + ans != B){
            ans++;
            }
            if(a+ans==A && b+ans==B){
                break;
            }
        }
    }
    cout << ans << endl;
}