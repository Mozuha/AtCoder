ABC054

## A - One Card Poker
[Problem Statement](https://atcoder.jp/contests/abc054/tasks/abc054_a)

### Approach
Add 13 if the number == 1, so it will be the strongest number.

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
  if (a == 1) a += 13;
  if (b == 1) b += 13;

  if (a == b) cout << "Draw" << endl;
  else if (a > b) cout << "Alice" << endl;
  else cout << "Bob" << endl;
}
```