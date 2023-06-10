#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    while(N >= 8){
        N -= 8;
        k++;
        i++;    
    }
    while(N >= 4){
        N -= 4;
        j++;
        i++;
    }
    while(N >= 2){
        N -= 2;
        l++;
        i++;
    }
    while(N >= 1){
        N -= 1;
        m++;
        i++;
    }
    cout << i << endl;
    for(int x = 0; x < k; x++){
        cout << 8 << endl;
    }
    for(int x = 0; x < j; x++){
        cout << 4 << endl;
    }
    for(int x = 0; x < l; x++){
        cout << 2 << endl;
    }
    for(int x = 0; x < m; x++){
        cout << 1 << endl;
    }
}