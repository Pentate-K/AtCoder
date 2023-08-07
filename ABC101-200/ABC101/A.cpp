#include <bits/stdc++.h>
using namespace std;



int main() {
    int a = 0;
    string s;
    cin >> s;
    for(int i=0; i < s.size(); i++){
        if(int(s[i]) == '+'){
            a++;
        }else if(int(s[i]) == '-'){
            a--;
        }else{
            continue;
        }
    }
    cout << a << endl;
}