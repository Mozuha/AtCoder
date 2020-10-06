ABC058

## A - ι⊥l
[Problem Statement](https://atcoder.jp/contests/abc058/tasks/abc058_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << ((b-a) == (c-b) ? "YES" : "NO") << endl;
}
```