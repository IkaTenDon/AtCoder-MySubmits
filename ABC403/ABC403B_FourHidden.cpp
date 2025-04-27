#include <bits/stdc++.h>
using namespace std;
int main() {
    string T, U;
    cin >> T;
    cin >> U;

    bool timeToSlide;

    for (int i = 0; i < T.length() - U.length()+ 1; i++) {
        timeToSlide = false;
        for (int j = 0; j < U.length(); j++) {
            if (U.at(j) != T.at(j + i) && T.at(j + i) != '?') {
                timeToSlide = true;
                break;
            }
        }
        if (timeToSlide == false) {
            cout << "Yes" <<endl;
            break;
        }
    }
    if (timeToSlide == true) {
        cout << "No" <<endl;
    }

    return 0;
}
