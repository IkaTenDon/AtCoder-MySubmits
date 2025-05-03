#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    string ans = "Yes";

    if (N != M)
    {
        ans = "No";
    } else
    {
        vector<int> linkedCounter(N, 0);
        int A, B;
        // int A;
        for (int i = 0; i < M; i++)
        {
            cin >> A >>B;
            // cin >> A;
            linkedCounter[A - 1]++;
            linkedCounter[B - 1]++;
        }
        for (int i = 0; i < N; i++)
        {
            if (linkedCounter[i] == 0 || linkedCounter[i] % 2 == 1)
            {
                ans = "No";
                break;
            }
        }
    }
    cout << ans <<endl;

    return 0;
}
