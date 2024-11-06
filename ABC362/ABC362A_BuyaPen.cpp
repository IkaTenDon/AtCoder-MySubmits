#include <bits/stdc++.h>
using namespace std;
int main() {
    int R=0, G=0, B=0;
    cin >> R >> G >> B;
    string C="";
    cin >> C;
    int ans=0;
    int a=0, b=0;
    if (C == "Red") {
        a=G;
        b=B; 
    } else if (C == "Green") {
        a=R;
        b=B;
    } else if (C == "Blue") {
        a=R;
        b=G;
    }
    if (a <= b)
    {
        ans = a;
    } else
    {
        ans = b;
    }
    cout << ans <<endl;
    return 0;
}