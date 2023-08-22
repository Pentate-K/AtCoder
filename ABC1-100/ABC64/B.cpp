#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    int a[110];
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a, a+N);
    cout << a[N-1] - a[0] << endl;
}