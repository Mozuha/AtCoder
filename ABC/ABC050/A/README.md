ABC050

## A - Addition and Subtraction Easy   
[Problem Statement](https://atcoder.jp/contests/abc050/tasks/abc050_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int a, b;
  char op;
  cin >> a >> op >> b;

  if (op == '+') cout << a + b << endl;
  else cout << a - b << endl;
}
```