ABC058

## C - Dubious Document
[Problem Statement](https://atcoder.jp/contests/abc058/tasks/arc071_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;
  map<char, int> na;  // store the maximum number of each alphabet that all strings have in common.
  for (int i = 'a'; i <= 'z'; i++) na[i] = INF;

  rep(i, n) {
    string s;
    cin >> s;
    map<char, int> mp;  // store the number of each alphabet in a string.
    for (auto c : s) mp[c]++;
    for (int i = 'a'; i <= 'z'; i++) na[i] = min(na[i], mp[i]);
  }

  for (auto c : na) rep(i, c.second) cout << c.first;
}
```