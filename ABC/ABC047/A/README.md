ABC047

## A - Fighting over Candies
[Problem Statement](https://atcoder.jp/contests/abc047/tasks/abc047_a)

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  cout << (((a+b)==c || (a+c)==b || (b+c)==a) ? "Yes" : "No") << endl;
}
```