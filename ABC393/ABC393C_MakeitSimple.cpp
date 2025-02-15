#include <bits/stdc++.h>
using namespace std;
int main() {

    int N = 0, M = 0;
    cin >> N >> M;

    vector<vector<int>> way(N, vector<int>(N+1, 0));
    int U;
    int V;
    for (int i = 0; i < M; i++)
    {
        cin >> U >> V;
        U--;
        V--;
        way[U][V]++;
    }

    // for (size_t i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << way[i][j] << ' ';
    //     }
    //     cout <<endl;
    // }

    int ans = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     ans = ans + way[i][i]; 
    // }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                ans = ans + way[i][j];
                way[i][j] = 0;
            } else if (way[i][j] + way[j][i] > 1)
            {
                ans = ans + way[i][j] + way[j][i] - 1;
                way[i][j] = 0;
                way[j][i] = 0;
            }
        }
    }

    cout << ans <<endl;

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << way[i][j] << ' ';
    //     }
    //     cout <<endl;
    // }
    

    return 0;
}
