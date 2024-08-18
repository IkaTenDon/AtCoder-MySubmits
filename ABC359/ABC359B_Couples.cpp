#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    vector<int> A(2*N);
    for (int i = 0; i < 2*N; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    for (int j = 2; j < N*2; j++)
    {
        if (A[j] == A[j-2])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}