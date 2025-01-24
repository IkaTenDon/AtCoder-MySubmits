#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int X = 0, N = 0;
    long long int buf = 1;
    int i = 2;
    cin >> X;
    bool keizoku = true;
    while (keizoku) {
        buf = buf * i;
        if (buf == X) {
            N = i;
            keizoku = false;
        } else {
            i++;
            keizoku = true;
        }
    }
    cout << N <<endl;
    return 0;
}
