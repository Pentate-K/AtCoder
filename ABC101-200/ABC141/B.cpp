#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    bool flag = true;
    for(int i=0; i< S.size(); i++){
        if(i % 2 == 0){
            if(S[i] != 'R' && S[i] != 'U' & S[i] != 'D'){
            flag = false;
            } 
        }
        else {
            if(S[i] != 'L' && S[i] != 'U' && S[i] != 'D'){
            flag = false;
            }
        }      
    }
    if(flag){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}