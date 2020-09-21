ABC053

## B - A to Z String
[Problem Statement](https://atcoder.jp/contests/abc053/tasks/abc053_b)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  cout << (s.find_last_of('Z') - s.find_first_of('A') + 1) << endl;
}
```