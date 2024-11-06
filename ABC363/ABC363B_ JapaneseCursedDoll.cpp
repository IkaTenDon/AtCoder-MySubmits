#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0, T = 0, P = 0;
    cin >> N >> T >> P;
    vector<int> L(N,0);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    int p = 0, daysCount = 0;
    while (true) {
        for (int k = 0; k < N; k++) {
            if (L[k] >= T) {
                p++;
            } else {
                L[k]++;
            }
        }
        if (p >= P) {
            cout << daysCount << endl;
            break;
        }
        daysCount++;
        p = 0;
    }
    return 0;
}