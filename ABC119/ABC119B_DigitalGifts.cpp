#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    double x = 0; string v = "";
    double ans = 0;
    for (size_t i = 0; i < N; i++)
    {
        cin >> x >> v;
        if (v == "JPY")
        {
            ans = ans + x;
        } else
        {
            ans = ans + (x * 380000);
        }
    }
    cout << ans <<endl;

    return 0;
}