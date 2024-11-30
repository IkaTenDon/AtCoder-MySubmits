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

    cout << N-leftCookie+D << endl;

    return 0;
}
