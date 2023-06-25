#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    float a = float(A) / 0.08;
    if(int(a*10) % 10 != 0){
        a++;
    }
    float b = float(B) / 0.10;
    vector<int> as(13);
    vector<int> bs(10);
    int i = 0;
    int j = 0;
    int c = 3000;
    // cout << a << ' ' << b << endl;
    while(a * 0.08 < A + 1){
        as.at(i) = int(a);
        a++;
        i++;
    }
    while(b * 0.10 < B + 1){
        bs.at(j) = int(b);
        b++;
        j++;
    }
    for(int k=0; k < as.size(); k++){
        for(int l=0; l < bs.size(); l++){
            if(as.at(k) == bs.at(l)){
                c = min (c, as.at(k));
            }
        }
    }
    if(c == 3000){
        c = -1;
    }
    cout << c << endl;

}