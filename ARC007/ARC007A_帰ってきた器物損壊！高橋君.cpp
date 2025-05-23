#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    char X;
    cin >> X;
    cin >> s;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] != X)
        {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}