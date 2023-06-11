#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    int n = N;
    int sum = 0;
    // vector<int> a(10);
    // for(int i = 0; i < 10; i++){
    //     a.at(i) = 0;
    // }
    while(n != 0){
        if(n % 10 != 0){
            while(n % 10 != 0){
                // a.at(i)++;
                sum++;
                n--;
            }
        }else{
            n /= 10;
        }
    }
    // cout << sum << endl;
    // cout << N << endl;
    if(N % sum == 0){
        cout << "Yes" << endl;
    } else{
        cout << "No"  << endl;
    }
}