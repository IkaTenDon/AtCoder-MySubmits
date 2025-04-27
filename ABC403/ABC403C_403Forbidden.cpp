#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0, M = 0, Q=0;
    cin >> N >> M >> Q;

    vector<vector<int>> watchable(N, vector<int>(M, 0)); //watchable[User][Page]
    int query, user, page;
    for (int i = 0; i < Q + 1; i++)
    {
        cin >> query >> user;
        if (query == 1)
        {
            cin >> page;
            user--;
            page--;
            watchable[user][page] = 1;
        } else if (query == 2)
        {
            for (int j = 0; j < M; j++)
            {
                user--;
                watchable[user][j] = 0;
            }
            
        } else if (query == 3)
        {
            cin >> page;
            user--;
            page--;
            if (watchable[user][page] == 1)
            {
                cout << "Yes" <<endl;
            } else
            {
                cout << "No" <<endl;
            }
        }
    }

    return 0;
}