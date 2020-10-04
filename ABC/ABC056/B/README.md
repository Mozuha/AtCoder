ABC056

## B - NarrowRectanglesEasy
[Problem Statement](https://atcoder.jp/contests/abc056/tasks/abc056_b)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int w, a, b;
  cin >> w >> a >> b;
  if (a > b) {
    cout << a-(b+w) << endl;
  }
  else {
    cout << (b-(a+w) > 0 ? b-(a+w) : 0) << endl;
  }
}
```