#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

bool isNumberInSet(int number, const set<int> numSet) {
    return numSet.find(number) != numSet.end();
}

int main(){
    set<int> A = {1, 3, 5, 7, 8, 10, 12};
    set<int> B = {4, 6, 9, 11};
    set<int> C = {2};
    int x, y;
    cin >> x >> y;
    if((isNumberInSet(x, A) && isNumberInSet(y, A)) || (isNumberInSet(x, B) && isNumberInSet(y, B)) || (isNumberInSet(x, C) && isNumberInSet(y, C))){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    
    
}