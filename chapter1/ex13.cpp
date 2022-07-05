#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, sum=0, ave=0;
  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  ave = sum / N;

  for (int i = 0; i < N; i++) {
    cout << abs(ave - vec.at(i)) << endl;
  }
}
