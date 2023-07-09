#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    string S;
    cin >> N >> L;
    cin >> S;
    int first = 1;
    int crush = 0;
    for(int i=0; i<N; i++){
        if(S[i] == '+'){
            first++;
            if(first > L){
                crush++;
                first = 1;
            }
        } else if(S[i] == '-'){
            first--;
        }
    }
    cout << crush << endl;
}