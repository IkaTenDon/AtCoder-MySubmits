#include <bits/stdc++.h>
using namespace std;
int main() {
    int Y = 0;
    cin >> Y;
    int ans = 0;
    if (Y % 4 != 0) {
        ans = 365;
    }
    if (Y % 4 == 0) {
        if (Y % 100 != 0) {
            ans = 366;
        }
    }
    if (Y % 100 == 0) {
        if (Y % 400 != 0) {
            ans = 365;
        }
    }
    if (Y % 400 == 0) {
        ans = 366;
    }
    cout << ans <<endl;
    return 0;
}
