#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    string s = "";
    cin >> s;
    int R = 0;
    int B = 0;
    for (int i = 0; i < N; i++)
    {
        if (s.at(i) == 'R')
        {
            R++;
        }
        if (s.at(i) == 'B')
        {
            B++;
        }
    }
    if (R > B)
    {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}