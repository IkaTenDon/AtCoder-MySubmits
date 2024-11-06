#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> A(2, 0);
    cin >> A[0] >> A[1];
    vector<int> B(2, 0);
    cin >> B[0] >> B[1];
    vector<int> C(2, 0);
    cin >> C[0] >> C[1];
    int AB = pow(B[0] - A[0], 2) + pow(B[1] - A[1], 2);
    int BC = pow(C[0] - B[0], 2) + pow(C[1] - B[1], 2);
    int CA = pow(A[0] - C[0], 2) + pow(A[1] - C[1], 2);
    string ans = "No";
    if (AB > BC && AB > CA) {
        if (AB == BC + CA) {
            ans = "Yes";
        }
    }
    if (BC > AB && BC > CA) {
        if (BC == AB + CA) {
            ans = "Yes";
        }
    }
    if (CA > AB && CA > BC) {
        if (CA == AB + BC) {
            ans = "Yes";
        }
    }
    cout << ans;
    return 0;
}