#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int ans = 0;

    int truei = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S.at(i) == 'i' && truei % 2 == 0) {
            // continue;
        } else if (S.at(i) == 'i' && truei % 2 == 1) {
            ans++;
            truei++;
        } else if (S.at(i) == 'o' && truei % 2 == 0) {
            ans++;
            truei++;
        } else if (S.at(i) == '0' && truei % 2 == 1) {
            // continue;
        }
    truei++;
    }

    // for (size_t j = 1; j < S.size(); j++) {
    //     if (S.at(j - 1) == S.at(j)) {
    //         ans++;
    //     }
    // }

    if ((S.size() + ans) % 2 == 1) {
        ans++;
    }
    
    cout << ans <<endl;

    return 0;
}
