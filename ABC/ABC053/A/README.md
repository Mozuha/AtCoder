ABC053

## A - ABC/ARC
[Problem Statement](https://atcoder.jp/contests/abc053/tasks/abc053_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int x;
  cin >> x;
  cout << (x < 1200 ? "ABC" : "ARC") << endl;
}
```