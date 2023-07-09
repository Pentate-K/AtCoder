#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int M = max(max(a, b), c);
    int sum = a + b + c;
    if((sum - M ) == M){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}