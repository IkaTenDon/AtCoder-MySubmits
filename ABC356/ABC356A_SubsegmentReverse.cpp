#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    int L = 0;
    int R = 0;
    cin >> N >> L >> R;
    vector<int> Result(N);
    for (int i = 0; i < N; i++)
    {
        Result[i] = i+1;
    }
    for (int j = 0; j < R-L+1; j++)
    {
        Result[L+j-1] = R-j;
    }
    for (int k = 0; k < N; k++)
    {
        cout << Result[k];
        cout << endl;
    }
    return 0;
}