#include <bits/stdc++.h>
using namespace std;
int main() {
    int R = 0;
    cin >> R;
    int ans = 0;
    if (R <= 99) {
        ans = 100 - R;
    }
    if (R >= 100 && R <= 199) {
        ans = 200 - R;
    }
    if (R >= 200) {
        ans = 300 - R;
    }
    cout << ans <<endl;
    return 0;
}