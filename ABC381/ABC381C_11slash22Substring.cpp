#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    string S = "";
    cin >> S;
    string ans = "Yes";

    if (S.length() % 2 == 1) {
        for (int k = 0; k < ((S.length()+1)/2)-1; k++) {
            if (S.at(k) != '1') {
                ans = "No";
            }
        }
        if (S.at(((S.length()+1)/2)-1) != '/') {
            ans = "No";
        }
        for (int j = ((S.length()+1)/2); j < N; j++) {
            if (S.at(j) != '2')
            {
                ans = "No";
            }
        }
    } else {
        ans = "No";
    }

    if (ans == "No") {
        int ans = 0, count = 0;
        int place;
        int leftwing = 0, rightwing = 0;
        for (int i = 0; i < N; i++)
        {
            if (S.at(i) == '/')
            {
                place = i-1;
                while (place > 0 && S.at(place) == '1') {
                    leftwing++;
                    place--;
                }
                place = i+1;
                while (place < N && S.at(place) == '2') {
                    rightwing++;
                    place++;
                }
                if (leftwing > rightwing) {
                    count = rightwing*2+1;
                } else {
                    count = leftwing*2+1;
                }
                if (count > ans) {
                    ans = count;
                }
            }
            count = 0, place = 0, leftwing = 0, rightwing = 0;
        }
        cout << ans <<endl;
    } else {
        cout << N <<endl;
    }
    return 0;
}
