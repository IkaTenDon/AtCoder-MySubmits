#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin >> m;
    int VV = 0;
    if (m < 100)
    {
        VV = 0;
    } else if (m <= 5000)
    {
        VV = m / 100;
    } else if (m <= 30000)
    {
        VV = m / 1000 + 50;
    } else if (m <= 70000)
    {
        VV = (m / 1000 - 30) / 5 + 80;
    } else
    {
        VV = 89;
    }
    if (VV < 10)
    {
        cout << 0 << VV <<endl;
    } else
    {
        cout << VV <<endl;
    }

    return 0;
}