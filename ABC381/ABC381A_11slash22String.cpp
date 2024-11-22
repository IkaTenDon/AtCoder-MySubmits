#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    string S = "";
    cin >> S;
    string ans = "Yes";

    if (S.length() % 2 != 1)
    {
        ans = "No";
    }
    
    for (size_t i = 0; i < ((S.length()+1)/2)-1; i++)
    {
        if (S.at(i) != '1')
        {
            ans = "No";
        }
    }
    if (S.at(((S.length()+1)/2)-1) != '/')
    {
        ans = "No";
    }
    for (size_t j = ((S.length()+1)/2); j < N; j++)
    {
        if (S.at(j) != '2')
        {
            ans = "No";
        }
    }
    
    cout << ans <<endl;
    return 0;
}
