#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;

    string S = "";
    vector<string> A(N, "aaa");
    for (int i = 0; i < N; i++) {
        cin >> S;
        A[i] = S;
    }
    for (int j = 0; j < N; j++) {
        S = A[N - j - 1];
        cout << S <<endl;
    }

    return 0;
}
