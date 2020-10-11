ABC060

## C - Sentou
[Problem Statement](https://atcoder.jp/contests/abc060/tasks/arc073_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;
  vector<int> t(N);
  rep(i, N) cin >> t[i];

  ll ans = 0;
  rep(i, N-1) {
    if (t[i+1] - t[i] >= T) ans += T;
    else ans += (t[i+1] - t[i]);
  }
  ans += T;

  cout << ans << endl;
}
```