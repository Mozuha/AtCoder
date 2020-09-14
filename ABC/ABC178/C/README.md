ABC178

## C - Ubiquity
[Problem Statement](https://atcoder.jp/contests/abc178/tasks/abc178_c)

### Approach
For an integer sequence of length n:  
- Number of ways to pick any value from 0 to 9 = 10^n  
- Number of ways to not pick 0 = Number of ways to pick any value from 1 to 9 = 9^n  
- Number of ways to not pick 9 = Number of ways to pick any value from 0 to 8 = 9^n  
- Number of ways to not pick 0 and 9 = Number of ways to pick any value from 1 to 8 = 8^n

Number of ways that a sequence does not contains at least either 0 or 9 will be (9^n + 9^n),
however, it double counts the number of ways to pick any value from 1 to 8, so subtract 8^n gives:  
Number of ways that a sequence does not contains at least either 0 or 9 = (9^n + 9^n - 8^n)  
**Therefore, the number of ways to pick any value from 0 to 9 and also contains 0 and 9 can be calculated by:
10^n - (9^n + 9^n - 8^n)**

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int mod = 1000000007;

// add mod if the calculation result produced negative value
ll minus_mod(ll val, ll m) {
  ll res = val % m;
  if (res < 0) res += m;
  return res;
}

int main() {
  int n;
  cin >> n;
  ll a = 1, b = 1, c = 1;
  rep(i, n) {
    a = (a * 10) % mod;  // 10^n
    b = (b * 9) % mod;   // 9^n
    c = (c * 8) % mod;   // 8^n
  }
  cout << minus_mod((a - (b + b - c)), mod) << endl;
}
```