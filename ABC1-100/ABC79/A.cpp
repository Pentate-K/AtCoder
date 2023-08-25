#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a = N % 10;
    N /= 10;
    int b = N % 10;
    N /= 10;
    int c = N % 10;
    N /= 10;
    int d = N % 10;
    if((a == b && b == c) || (b == c && c == d)){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}