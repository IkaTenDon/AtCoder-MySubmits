#include <bits/stdc++.h>
using namespace std;
int main() {
    int R, X;
    cin >> R >> X;
    string ans = "No";

    if (X == 1)
    {
        if (R >= 1600 && R <= 2999)
        {
            ans = "Yes";
        }
    } else if (X == 2)
    {
        if (R >= 1200 && R <= 2399)
        {
            ans = "Yes";
        }
        
    }

    // if ((R >= 1600) && (R <= 2999) && (X = 1))
    // {
    //     ans = "Yes";
    // } else if ((R >= 1200) && (R <= 2399) && (X = 2))
    // {
    //     ans = "Yes";
    // }
    
    cout << ans <<endl;

    return 0;
}