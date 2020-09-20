ABC179

## C - A x B + C
[Problem Statement](https://atcoder.jp/contests/abc179/tasks/abc179_c)

### Approach
Since 2 <= n <= 1e6, two n loop will cause TLE.
Code below will cause TLE:
```c++
for (int a = 1; a < n; a++) {
  for (int b = 1; b < n; b++) {
    if (a*b < n) count++;
  }
}
```
Instead, compare a*b < n in the second loop so it will reduce the number of loop and fit in time.

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
  int count = 0;
  for (int a = 1; a < n; a++) { 
    for (int b = 1; a*b < n; b++) {  // decrease number of loop by compare a*b<n, rather than b<n then if(a*b<n)
      count++;
    }
  }
  cout << count << endl;
}
```