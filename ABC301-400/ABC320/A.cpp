#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    A = (float)A;
    B = (float)B;
    
    cout << (int)(pow(A, B) + pow(B, A)) << endl;
    
}