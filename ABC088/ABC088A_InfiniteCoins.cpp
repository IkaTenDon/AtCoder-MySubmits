#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    int A = 0;
    cin >> N;
    cin >> A;
    int INeedCoins = 0;
    INeedCoins = N % 500;
    if (INeedCoins <= A) {
        cout << "Yes" <<endl;
    } else {
        cout << "No" <<endl;
    } 
    return 0;
}