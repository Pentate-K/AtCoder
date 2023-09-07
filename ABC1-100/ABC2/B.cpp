#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int i = 0;
    while(i < S.size()){
        if(S[i] == 'a' || S[i] == 'i' || S[i] == 'u' || S[i] == 'e' || S[i] == 'o'){
            S.erase(i, 1);
        }else{
            i++;
        }
    }
    cout << S << endl;
}