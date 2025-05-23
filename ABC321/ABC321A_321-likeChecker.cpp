#include <bits/stdc++.h>
using namespace std;
int main() {
    string N;
    cin >> N;
    string ans = "Yes";
    for (size_t i = 1; i < N.size(); i++)
    {
        if (int(N[i-1] - '0') <= int(N[i] - '0'))
        {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;

    return 0;
}