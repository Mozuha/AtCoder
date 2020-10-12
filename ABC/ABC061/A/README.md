ABC061

## A - Three-letter acronym
[Problem Statement](https://atcoder.jp/contests/abc059/tasks/abc059_a)

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
  cout << (char)toupper(a[0]) << (char)toupper(b[0]) << (char)toupper(c[0]) << endl;
}
```