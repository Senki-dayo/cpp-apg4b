#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;

  int plus = 0, minus = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') plus++;
    if (S.at(i) == '-') minus++;
  }
  cout << 1 + plus - minus << endl;
}