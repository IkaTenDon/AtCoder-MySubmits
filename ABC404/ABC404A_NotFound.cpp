#include <bits/stdc++.h>
using namespace std;
int main() {
    string S = "";
    cin >> S;
    vector<string>A(26, "");
    A[0] = "a"; A[1] = "b"; A[2] = "c"; A[3] = "d";
    A[4] = "e"; A[5] = "f"; A[6] = "g"; A[7] = "h";
    A[8] = "i"; A[9] = "j"; A[10] = "k"; A[11] = "l";
    A[12] = "m"; A[13] = "n"; A[14] = "o"; A[15] = "p";
    A[16] = "q"; A[17] = "r"; A[18] = "s"; A[19] = "t";
    A[20] = "u"; A[21] = "v"; A[22] = "w"; A[23] = "x";
    A[24] = "y"; A[25] = "z";
    for (int i = 0; i < 26; i++) {
        if (S.find(A[i]) == -1) {
            cout << A[i];
            break;
        }
    }

    return 0;
}
