ABC057

## A - Remaining Time
[Problem Statement](https://atcoder.jp/contests/abc057/tasks/abc057_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  cout << (a+b < 24 ? a+b : a+b-24) << endl;
}
```