#include <bits/stdc++.h>
using namespace std;
int main() {
    int Think = 0;
    string S = "";
    cin >> S;
    for (int i = 0; i < 4; i++)
    {
        if (S.at(i) == '+')
        {
            Think = Think + 1;
        } else if (S.at(i) == '-')
        {
            Think = Think - 1;
        }
    }
    cout << Think << endl;
    return 0;
}