#include <bits/stdc++.h>
using namespace std;
int main() {
    string S = "";
    cin >> S;

    char rule = 'a';
    char odd = 'a';

    if (S[0] == S[1])
    {
        rule = S[0];
        for (size_t i = 2; i < S.size(); i++)
        {
            if (S[i] != rule)
            {
                odd = S[i];
                break;
            }
            
        }
        
    } else if (S[1] == S[2])
    {
        rule = S[1];
        odd = S[0];
    } else if (S[0] == S[2])
    {
        rule = S[0];
        odd = S[1];
    }
    
    cout << odd <<endl;

    return 0;
}