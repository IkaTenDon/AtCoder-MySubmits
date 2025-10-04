#include <bits/stdc++.h>
using namespace std;
int main() {
    string X, Y;
    cin >> X >> Y;

    string ans = "Yes";

    if (X == "Ocelot" && Y != "Ocelot")
    {
        ans = "No";
    } else if (X == "Serval" && Y == "Lynx")
    {
        ans = "No";
    }

    cout << ans << endl;

    return 0;
}