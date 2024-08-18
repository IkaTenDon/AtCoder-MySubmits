#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    int ans = 0;
    for (int j = 0; j < N; j++)
    {
        if (S[j] == "Takahashi")
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}