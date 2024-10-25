#include <bits/stdc++.h>
using namespace std;
int main() {
    int L, Q;
    cin >> L >> Q;
    int c, x;
    set<int> Qcut;
    Qcut.insert(0);
    Qcut.insert(L);
    for (int i = 0; i < Q; i++)
    {
        cin >> c >> x;
        if (c == 1)
        {
            Qcut.insert(x);
        } else
        {
            auto forward = Qcut.lower_bound(x);
            auto back = Qcut.lower_bound(x);
            back--;
            cout << *forward - *back <<endl;
        }
    }
    return 0;
}