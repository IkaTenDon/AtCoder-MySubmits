#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int M;
    cin >> N >> M;
    vector way(N , vector<int>(N,0));
    int U;
    int V;
    for (int i = 0; i < M; i++)
    {
        cin >> U >> V;
        U--;
        V--;
        way[U][V] = 1;
        way[V][U] = 1;
    }
    int ans = 0;
    for (int j = 0; j < N-2; j++)
    {
        for (int k = j+1; k < N-1; k++)
        {
            for (int l = k+1; l < N; l++)
            {
                if (way[j][k] == 1)
                {
                    if (way[k][l] == 1)
                    {
                        if (way[l][j] == 1 )
                        {
                            ans = ans + 1;
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    cout << ans << endl;
    return 0;
}