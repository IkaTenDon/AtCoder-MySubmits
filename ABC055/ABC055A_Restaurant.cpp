#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int ans = 0;
    cin >> N;
    while (N > 14)
    {
        ans += 11800;
        N -= 15;
    }
    ans = ans + (N * 800);
    cout << ans <<endl;
    return 0;
}
