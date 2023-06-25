#include <bits/stdc++.h>
using namespace std;


int main(){
    int K, X;
    cin >> K >> X;
    int a = X - K + 1; 
    for(int i=0; i < 2*K-1; i++){
        cout << a + i << endl;
    }
}