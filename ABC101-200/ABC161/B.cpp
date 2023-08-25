#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int A[110];
    int sum = 0;
    for(int i=0; i<N; i++){
        cin >> A[i];
        sum += A[i];
    }
    sort(A, A+N);
    reverse(A, A+N);
    int count = 0;
    for(int i=0; i<M; i++){
        if(4 * M * A[i] >= sum){
            count++;
        }    
    }
    if(count == M){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}