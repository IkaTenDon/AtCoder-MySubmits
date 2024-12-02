#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 0, M = 0;
    cin >> N >> M;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i]; //人,nin
    }
    vector<int> B(M, 0);
    for (int j = 0; j < M; j++) {
        cin >> B[j]; //寿司,sara
    }
    int sara = 0, nin = 0;
    vector<vector<int>> B(N, vector<int>(N, -1));
    int lasteater = 0;
    for (int k = 0; k < M; k++) {
        
    }
    /*
    for (sara = 0; sara < M; sara++) {
        for (nin = 0; nin < N; nin++) {
            if (A[nin] <= B[sara]) {
                cout << nin+1 <<endl;
                B[sara] = -1;
                break;
            }
        }
        if (B[sara] != -1) {
            cout << -1 <<endl;
        }
    }
    */

    return 0;
}
