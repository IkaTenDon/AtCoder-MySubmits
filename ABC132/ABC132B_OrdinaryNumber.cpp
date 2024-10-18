#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int ans = 0;
    for (int j = 1; j < n-1; j++)
    {
        if (p[j-1] < p[j] && p[j] < p[j+1])
        {
            ans++;
        }else if (p[j-1] > p[j] && p[j] > p[j+1])
        {
            ans++;
        }
    }
    cout << ans <<endl;
    return 0;
}