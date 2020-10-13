ABC059

## B - Comparison
[Problem Statement](https://atcoder.jp/contests/abc059/tasks/abc059_b)

### Approach
Need to handle large value (~10<sup>100</sup>)  
Double type can handle 2.22507e-308 ~ 1.79769e+308 (±10<sup>-308</sup> ~ 10<sup>308</sup>).

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  double a, b;
  cin >> a >> b;
  cout << (a > b ? "GREATER" : (a < b ? "LESS" : "EQUAL")) << endl;
}
```