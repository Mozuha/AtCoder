ABC051

## B - Sum of Three Integers   
[Problem Statement](https://atcoder.jp/contests/abc051/tasks/abc051_b)

### Approach
Triple loop will cause TLE, so make it double loop.  
If the value of x and y are determined and (s-(x+y)) >= 0 AND (s-(x+y)) <= k, the value z exists that satisfy the conditions 0<=x+y+z<=k and x+y+z=s.

### Code (C++)
```c++
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int k, s;
  cin >> k >> s;

  int count = 0;
  for (int x = 0; x <= k; x++) {
    for (int y = 0; y <= k; y++) {
      if (s - (x + y) >= 0 && s - (x + y) <= k) count++;
    }
  }

  cout << count << endl;
}
```