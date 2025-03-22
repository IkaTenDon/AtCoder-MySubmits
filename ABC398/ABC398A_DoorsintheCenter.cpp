#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;

    if (N == 1) {
        cout << "=";
    } else if (N % 2 == 0) {
        for (int i = 0; i < (N / 2) - 1; i++) {
            cout << "-";
        }
        cout << "==";
        for (int j = 0; j < (N / 2) - 1; j++) {
            cout << "-";
        }
    } else {
        for (int k = 0; k < ((N - 1) / 2); k++) {
            cout << "-";
        }
        cout << "=";
        for (int l = 0; l < ((N - 1) / 2); l++) {
            cout << "-";
        }
    }

    return 0;
}
