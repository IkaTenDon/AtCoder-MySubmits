#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> DeCuePCCountHavingThisVersion(N, 0);

    for (size_t i = 0; i < N; i++)
    {
        DeCuePCCountHavingThisVersion[i] = 1;
    }
    int X, Y;
    //ここまで初期化

    int UpdatedPC = 0;
    for (size_t i = 0; i < Q; i++)
    {
        cin >> X >> Y;
        for (size_t i = N - X; i < N; i++)
        {
            if (DeCuePCCountHavingThisVersion[i] == 0)
            {
                break;
            }
            
            UpdatedPC += DeCuePCCountHavingThisVersion[i];
            DeCuePCCountHavingThisVersion[i] = 0;
        }
        cout << UpdatedPC <<endl;
        DeCuePCCountHavingThisVersion[N - Y] += UpdatedPC;
        UpdatedPC = 0;
    }
    

    return 0;
}