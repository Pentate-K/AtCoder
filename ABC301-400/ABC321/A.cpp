#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    
    cin >> N;
    if(N >= 1 && N <= 9){
        cout << "Yes" << endl;
    }
    
    int a = N % 10;
    N /= 10;

    int b = N % 10;
    N /= 10;
    if(N == 0 && b != 0){
        if(b > a){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    int c = N % 10;
    N /= 10;
    if(N == 0 && c != 0){
        if(b > a && c > b){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    int d = N % 10;
    N /= 10;
    if(N == 0 && d != 0){
        if(b > a && c > b && d > c){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    int e = N % 10;
    N /= 10;
    if(N == 0 && e != 0){
        if(b > a && c > b && d > c && e > d){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    
}