#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << min(abs(a-b), min(abs(a-(b+10)), abs(a+10-b))) << endl;
}