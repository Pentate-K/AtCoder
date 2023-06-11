#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string s, t, u;
    cin >> s >> t >> u;
    char x = s[0];
    int X = x - 32;
    char a = X;
    char y = t[0];
    int Y = y - 32;
    char b = Y;
    char z = u[0];
    int Z = z - 32;
    char c = Z;
    cout << a << b << c << endl;
}