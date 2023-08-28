#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for(int i=A; i<=B; i++){
        int n = i;
        int a = n % 10;
        n /= 10;
        int b = n % 10;
        n /= 10;
        int c = n % 10;
        n /= 10;
        int d = n % 10;
        n /= 10;
        int e = n % 10;
        if(a == e && b == d){
            ans++;
        }
    }
    cout << ans << endl;
}