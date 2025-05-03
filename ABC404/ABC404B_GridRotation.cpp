#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    
    vector<vector<char>> S(N, vector<char>(N, 'a'));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> S[i][j];
        }
    }
    
    vector<vector<char>> T(N, vector<char>(N, 'a'));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> T[i][j];
        }
    }

    vector<vector<char>> SRot(N, vector<char>(N, 'a')); //90
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            SRot[i][j] = S[N - 1 - j][i];
        }
    }

    vector<vector<char>> SRotRot(N, vector<char>(N, 'a')); //180
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            SRotRot[i][j] = SRot[N - 1 - j][i];
        }
    }

    vector<vector<char>> SRotRotRot(N, vector<char>(N, 'a')); //270
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            SRotRotRot[i][j] = SRotRot[N - 1 - j][i];
        }
    }

    // ここから比較
    int ans;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (S[i][j] != T[i][j])
            {
                count++;
            }
        }
    }
    ans = count;
    count = 0;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (SRot[i][j] != T[i][j])
            {
                count++;
            }
        }
    }
    if (ans > count + 1)
    {
        ans = count + 1;
    }
    count = 0;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (SRotRot[i][j] != T[i][j])
            {
                count++;
            }
        }
    }
    if (ans > count + 2)
    {
        ans = count + 2;
    }
    count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (SRotRotRot[i][j] != T[i][j])
            {
                count++;
            }
        }
    }
    if (ans > count + 3)
    {
        ans = count + 3;
    }
    count = 0;

    cout << ans <<endl;

    return 0;
}
