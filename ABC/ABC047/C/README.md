ABC047

## C - 1D Reversi
[Problem Statement](https://atcoder.jp/contests/abc047/tasks/arc063_a)

### Approach
The minimum number of placing new stones is equal to the number of the places where adjacent stones are different color.

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, (int)s.size()-1) {
    if (s[i] != s[i+1]) ans++;
  }
  cout << ans << endl;
}
```