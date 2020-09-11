ABC042

## B - Iroha Loves Strings (ABC Edition)    
[Problem Statement](https://atcoder.jp/contests/abc042/tasks/abc042_b)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n, l;
  cin >> n >> l;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  sort(s.begin(), s.end());
  string ans;
  rep(i, n) ans += s[i];
  cout << ans << endl;
}
```