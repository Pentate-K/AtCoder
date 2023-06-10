#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    cout << s[0] << s.length() - 2 << s[n-1] << endl;
}