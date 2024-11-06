#include <bits/stdc++.h>
using namespace std;
int main() {

    int N = 0;
    cin >> N;
    vector<int> A(N,0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int Gold = 0, Silver = 0, Goldat = 0, Silverat = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > Gold)
        {
            Silver = Gold;
            Silverat = Goldat;
            Gold = A[i];
            Goldat = i;
        } else if (A[i] > Silver) {
            Silver = A[i];
            Silverat = i;
        }
    }
    Silverat++;
    cout << Silverat <<endl;
    return 0;
}
