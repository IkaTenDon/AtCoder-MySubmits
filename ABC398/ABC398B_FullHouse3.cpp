#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> Acount(14, 0);
    int A = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> A;
        Acount[A]++;
    }
    
    int isMoreThan3 = 0, is2 = 0;
    string ans = "No";
    for (int i = 0; i < 14; i++)
    {
        if (Acount[i] >= 3)
        {
            isMoreThan3++;
        } else if (Acount[i] == 2)
        {
            is2++;
        }
    }
    if (isMoreThan3 >= 2 || (isMoreThan3 == 1 && is2 >= 1))
    {
        ans = "Yes";
    }

    cout << ans <<endl;

    return 0;
}
