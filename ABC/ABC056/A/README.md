ABC056

## A - HonestOrDishonest
[Problem Statement](https://atcoder.jp/contests/abc056/tasks/abc056_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  char a, b;
  cin >> a >> b;
  cout << (a == b ? 'H' : 'D') << endl;
}
```