#include <bits/stdc++.h>
using namespace std;
int main() {
    int Q = 0, l = 0;
    cin >> Q;
    vector<int> bigsnake(Q, 0); //length.
    int bighead = 0, bigtail =0; //just a number, not a size.
    vector<int> read(2, 0); //QueryType, QueryNumber.
    int sum = 0; //for Q3.
    for (int i = 0;i < Q;i++) {
        cin >> read[0] >> read[1];
        if (read[0] == 1) {
            bigsnake[bigtail] = read[1] - 48;
            bigtail++;
        } else if (read[0] == '2') {
            bighead++;
        } else if (read[0] == '3') {
            sum = 0;
            for (int i = bighead; i < read[1] + bighead; i++) {
                sum = sum + bigsnake[i];
            }
            cout << sum <<endl;
        }
    }
    return 0;
}
