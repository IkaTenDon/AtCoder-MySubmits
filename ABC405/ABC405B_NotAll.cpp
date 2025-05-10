#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> condition(M, 0);
    for (int i = 0; i < M; i++) {
        condition[i] = i + 1;
    }

    bool foundAll = true;
    int ans = 0;
    do {
        for (size_t i = 0; i < M; i++) {
            if (find(A.begin(), A.end(), condition[i]) != A.end() == false) {
                foundAll = false;
                break;
            }
            if (foundAll == true)
            {
                A.erase(A.end() - 1);
                ans++;
            }
            
        }
    } while (foundAll == true);
    cout <<

    return 0;
}