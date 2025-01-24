#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int fir, sec;
    fir = S.at(0) - 48;
    sec = S.at(2) - 48;
    int ans = 0;
    ans = fir * sec;
    cout << ans <<endl;

    return 0;
}
