ABC055

## A - Restaurant
[Problem Statement](https://atcoder.jp/contests/abc055/tasks/abc055_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  cout << (n*800) - ((n/15)*200) << endl;
}
```