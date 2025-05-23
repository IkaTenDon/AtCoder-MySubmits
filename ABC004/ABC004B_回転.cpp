#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<char>>c(4, vector<char>(4, 'a'));
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cin >> c[i][j];
        }
    }
    for (int i = 4 - 1; i >= 0; i--)
    {
        for (int j = 4 - 2; j >= 0; j--)
        {
            cout << c[i][j] << ' ';
        }
        cout << c[i][3] << endl;
    }
    return 0;
}
