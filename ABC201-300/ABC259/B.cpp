#include <bits/stdc++.h>
using namespace std;

int main(){
    // なんか誤差でACにならない。ぴえん
    double pi = M_PI;
    int a, b, d;
    cin >> a >> b >> d;
    float ansx = a * cos((d/360.0) * 2 * pi) - b * sin((d/360.0) * 2 * pi);
    float ansy = a * sin((d/360.0) * 2 * pi) + b * cos((d/360.0) * 2 * pi);
    cout << ansx << " " << ansy << endl;
}