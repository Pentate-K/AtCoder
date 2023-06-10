#include <bits/stdc++.h>
using namespace std;


//Buffet
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N - 1);
    int ans = 0;
    for(int i=0; i < N; i++){
        cin >> A.at(i);
        cin >> B.at(i);
        ans += B.at(i); 
         
    }
    for(int j = 0; j < N - 1; j++){
        cin >> C.at(j);
        // cout << C.at(i) << endl;
    }

    for(int k = 0; k < N - 1; k++){
         
        if(A.at(k + 1) == A.at(k) + 1){
            ans += C.at(k);
        }
    }
    ans += B.at(N-1);
    cout << ans << endl;
    
}

// //Get Closer]

// int main(){
//     int A, B;
//     cin >> A;
//     cin >> B;
//     float distance = sqrt((A * A) + (B * B));
//     float inverse = 1 / distance;
//     float x = A * inverse;
//     float y = B * inverse;
//     cout << x << " " << y << endl;
// }

// // Caesar Cipher

// int main(){
//     // vector<char> alpha = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
//     // string S;
//     // string T;
//     // cin >> S;
//     // cin >> T;
//     // for(int i= 0; i < 26; i++){
//     //     for(int j = 0; j < S.size(); j++){
//     //         S[j] = 
//     //     }
//     // } 

//     int N;
//     cin >> N ;
//     int ans = 0;
//     vector<string> vec(N);
//     for(int i = 0; i < N; i++){
//         cin >> vec.at(i);
//         if(i == 0){
//             ans ++;
//         }
//         for(int j = 0; j <= i; j++){
//             if(vec.at(j) == vec.at(i)){
//                 break;
//             } else{
//                 ans ++;
//             }
//         }
//     }
//     cout << ans << endl;
// }

// BitterAlchemy
// int main(){
//     int N, X;
//     cin >> N;
//     cin >> X;
//     int sum = 0;
//     int ans;
//     vector<int> donuts(N);
//     for(int i=0; i < N; i++){
//         cin >> donuts.at(i);
//         sum += donuts.at(i);
//     }
//     int minimum = *min_element(donuts.begin(), donuts.end());
//     if(X < sum){
//         cout << "Xの量を増やしてください。" << endl;
//     }
//     else{
//         int append = (X - sum) / minimum;
//         ans = N + append ;
//         cout << ans << endl;
//     }
    

// }

// 添え字
// int main(){
//     string s;
//     int c;
//     cin >> s;
//     cin >> c;
//     // char[] str;
//     // for(int i=0; i < s.size(); i++){
//     //     str[i] = s[i];
//     // }
//     cout << s[c-1] << endl;
// }