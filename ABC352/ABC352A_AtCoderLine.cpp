#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  int X;
  int Y;
  int Z;
  cin >> N >> X >> Y >> Z;
  if (Y < Z && Z < X)
  {
    cout << "Yes" <<endl;
  } else if (X < Z && Z < Y)
  {
    cout << "Yes" <<endl;
  } else  
  {
    cout << "No" <<endl;
  }
  return 0;
}