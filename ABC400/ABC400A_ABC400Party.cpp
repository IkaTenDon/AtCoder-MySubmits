#include <bits/stdc++.h>
using namespace std;
int main() {
    double A = 0;
    cin >> A;
    long double B = 400 / A;
    if (floor(B) ==  B)
    {
        cout << floor(B) <<endl;
    } else {
        cout << -1 <<endl;
    }
    

    return 0;
}