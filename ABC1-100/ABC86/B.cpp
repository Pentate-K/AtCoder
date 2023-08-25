#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string A = to_string(a);
    string B = to_string(b);
    string AB = A + B;
    int ab = stoi(AB);
    float num = (float)ab;
    bool ans = false;
    for(int i=1; i<=sqrt(num); i++){
        if(i*i == ab){
            ans = true;
        }
    }
    if(ans){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}