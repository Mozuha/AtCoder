ABC060

## A - Shiritori
[Problem Statement](https://atcoder.jp/contests/abc060/tasks/abc060_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  cout << (a[a.size()-1] == b[0] && b[b.size()-1] == c[0] ? "YES" : "NO") << endl;
}
```