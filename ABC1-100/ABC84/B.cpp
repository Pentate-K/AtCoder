#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;
    bool judge = true;
    for(int i=0; i<S.size(); i++){
        if(i == A && (S[i] != '-')){
            judge = false;
            break;
        } else if(i != A && S[i] == '-'){
            judge = false;
            break;
        } else{
            continue;
        }
    }
    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}