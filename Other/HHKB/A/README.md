HHKB Programming Contest 2020

## A - Keyboard  
[Problem Statement](https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  char s, t;
  cin >> s >> t;
  cout << (s == 'Y' ? (char)toupper(t) : t) << endl; 
}
```