#include <bits/stdc++.h>
using namespace std;
int main() {
    string S = "";
    cin >> S;
    int ans = 0;
    int distanceBetweenAtoB = 0;
    int nowStanding = 0;

    for (nowStanding = 0; nowStanding < S.size(); nowStanding++)
    {    
        if (S.at(nowStanding) == 'A')
        {
            for (int i = nowStanding; i < S.size(); i++)
            // nowStandingから始めるB探し
            {
                if (S.at(i) == 'B')
                {
                    distanceBetweenAtoB = i - nowStanding;
                    if (i + distanceBetweenAtoB < S.size())
                    {
                        if (S.at(i + distanceBetweenAtoB) == 'C')
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }

    cout << ans <<endl;

    return 0;
}
