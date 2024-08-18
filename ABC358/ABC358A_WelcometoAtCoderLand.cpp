#include <bits/stdc++.h>
using namespace std;
int main() {
    string S ="";
    string T ="";
    string Judge = "Yes";
    cin >> S >> T;
    if (S != "AtCoder")
    {
        Judge = "No";
    }
    if (T != "Land")
    {
        Judge = "No";
    }
    cout << Judge <<endl;
    return 0;
}