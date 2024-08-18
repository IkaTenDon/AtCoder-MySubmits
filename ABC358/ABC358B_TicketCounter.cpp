#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int A;
    cin >> N >> A;
    vector<int> T(N);
    for (int h = 0; h < N; h++)
    {
        cin >> T[h];
    }
    vector<int> ans(N);
    ans[0] = T[0] + A;
    for (int i = 1; i < N; i++)
    {
        if (ans[i-1] > T[i])
        {
            ans[i] = ans[i-1] + A;
        }
        else
        {
            ans[i] = T[i] + A;
        }
    }
    for (int j = 0; j < N; j++)
    {
        cout << ans[j] <<endl;
    }
    return 0;
}