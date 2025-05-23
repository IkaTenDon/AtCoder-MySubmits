#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;

    for (size_t i = 0; i < S.size(); i++)
    {
        if (S[i] != '.')
        {
            cout << S[i];
        }        
    }
    cout << endl;

    return 0;
}