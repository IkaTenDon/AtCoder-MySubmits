#include <bits/stdc++.h>
using namespace std;
int main() {

    float X = 0;
    cin >> X;

    int ans = 0;

    if (X >= 38.0) {
        ans = 1;
    } else if (X < 37.5) {
        ans = 3;
    } else {
        ans = 2;
    }

    cout << ans << endl;

    return 0;
}
