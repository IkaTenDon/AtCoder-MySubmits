#include <bits/stdc++.h>
using namespace std;
int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    cin >> A >> B >> C;
    if (A <= C && C <= B)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}