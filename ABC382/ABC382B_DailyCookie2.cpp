#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 0, D = 0;
    cin >> N >> D;
    string S = "";
    cin >> S;
    
    int leftCookie = 0;
    for (int i = 0; i < N; i++)
    {
        if (S.at(i) == '@')
        {
            leftCookie++;
        }
    }

    leftCookie = leftCookie - D;

    for (int j = 0; j < N; j++)
    {
        if (S.at(j) == '@' && leftCookie > 0)
        {
            leftCookie--;
            cout << '@';
        } else
        {
            cout << '.';
        }
    }
    cout <<endl;

    return 0;
}
