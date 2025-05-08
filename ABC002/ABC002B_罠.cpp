#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    for (unsigned int i = 0; i < S.size(); i++)
    {
        if (S[i] != 'a' && S[i] != 'i' && S[i] != 'u' && S[i] != 'e' && S[i] != 'o')
        {
            cout << S[i];
        }
    }
    cout << endl;

    return 0;
}
