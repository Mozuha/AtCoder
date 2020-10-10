HHKB Programming Contest 2020

## C - Neq Min
[Problem Statement](https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c)

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
  map<int, int> mp;  // memo whether an integer already appeared
  int ans = 0;

  rep(i, n) {
    int num;
    cin >> num;
    mp[num] = 1;
    while (mp[ans] == 1) ++ans;
    cout << ans << endl;
  }
}
```