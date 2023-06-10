#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main() {
    int N;
    cin >> N;
    int ans = 0;
    map<string, int> m;
    string s;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(!(m.count(s))){
            m[s]++;
            
        } 
    }
    
    
    cout << m.size() << endl;
    
}