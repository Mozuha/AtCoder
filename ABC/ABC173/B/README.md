ABC173

## B - Judge Status Summary
[Problem Statement](https://atcoder.jp/contests/abc173/tasks/abc173_b)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  map<string, int> verdicts;
  cin >> n;
  rep(i, n) {
    string s;
    cin >> s;
    ++verdicts[s];
  }
  for (auto c : {"AC", "WA", "TLE", "RE"}) cout << c << " x " << verdicts[c] << endl;
}
```