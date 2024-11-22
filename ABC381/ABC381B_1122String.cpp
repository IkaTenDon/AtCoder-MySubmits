#include <bits/stdc++.h>
using namespace std;
int main() {
    string S = "";
    cin >> S;
    int N = S.length();
    string ans = "Yes";

    if (S.length() % 2 != 0)
    {
        ans = "No";
    }
    if (ans == "Yes")
    {
        set<char> used;
        char now = '1';

        for (size_t i = 0; i < N; i++)
        {
            now = S.at(i);
            i++;
            if (S.at(i) == now && used.find(now) == used.end())
            {
                used.insert(now);
            } else
            {
                ans = "No";
            }
        }    
    }

    cout << ans <<endl;
    return 0;
}
