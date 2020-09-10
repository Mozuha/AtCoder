ABC042

## A - Iroha and Haiku (ABC Edition)    
[Problem Statement](https://atcoder.jp/contests/abc042/tasks/abc042_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  vector<int> iroha(3);
  for (int i = 0; i < 3; i++) cin >> iroha[i];
  cout << (count(iroha.begin(), iroha.end(), 5) == 2 
  && count(iroha.begin(), iroha.end(), 7) == 1 ? "YES" : "NO") << endl;
}
```