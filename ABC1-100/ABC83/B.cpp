#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;
    for(int i = 1; i < N + 1; i++){
        int n = i;
        int subsum = 0;
        while(n > 0){ //イテレータiを入れるな！
            subsum += n % 10;
            n /= 10;
        }
        if(subsum >= A && subsum <= B){
            ans += i;
        }
    }
    cout << ans << endl;
}