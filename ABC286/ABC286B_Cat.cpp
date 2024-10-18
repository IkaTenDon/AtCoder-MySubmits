#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int nya = 0;
    for (int i = 0; i < N; i++)
    {
        if (nya == 1 && S.substr(i, 1) == "a")
        {
            cout << "y";
            nya = 0;
        } else {
            nya = 0;
        }
        if (S.substr(i, 1) == "n")
        {
            nya = 1;
        }
        cout << S.substr(i, 1);
    }
    return 0;
}