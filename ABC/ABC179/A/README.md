ABC179

## A - Plural Form
[Problem Statement](https://atcoder.jp/contests/abc179/tasks/abc179_a)

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
  cout << (s[s.size()-1] == 's' ? s.append("es") : s.append("s")) << endl;
}
```