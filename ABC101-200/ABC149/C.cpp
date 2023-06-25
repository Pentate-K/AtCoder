#include <bits/stdc++.h>
using namespace std;

vector<int> prime;

bool isPrime(long long n){
    for(long long i=2; i*i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long X;
    cin >> X;
    long long ans = 0;
    for(long long i=2; i<100010; i++){
        if(isPrime(i)){
            prime.push_back(i);
        }
    }
    for(long long i=0; i<prime.size(); i++){
        if(i == 0){
            ans = 2;
        }else if(prime.at(i-1) -X < 0 && prime.at(i) -X >= 0){
            ans = prime.at(i);
        }
    }
    cout << ans << endl;
}