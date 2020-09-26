ABC055

## B - Training Camp
[Problem Statement](https://atcoder.jp/contests/abc055/tasks/abc055_b)

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
  ll power = 1;
  for (int i = 1; i <= n; i++) power = (power * i) % (1000000007);  // take modulo every time
  cout << power << endl;
}
```