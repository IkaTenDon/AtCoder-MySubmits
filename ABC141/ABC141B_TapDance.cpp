#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;

    string ans = "Yes";
    for (size_t i = 0; i < S.length(); i+=2)
    {
        if (S[i] != 'R' && S[i] != 'U' && S[i] != 'D')
        {
            ans = "No";
            break;
        }
    }
    if (ans == "Yes" && S.length() > 1)
    {
        for (size_t i = 1; i < S.length(); i+=2)
        {
                if (S[i] != 'L' && S[i] != 'U' && S[i] != 'D')
            {
                ans = "No";
                break;
            }
        }
    }
    cout << ans <<endl; 

    return 0;
}