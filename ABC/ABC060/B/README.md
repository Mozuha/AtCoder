ABC060

## B - Choose Integers
[Problem Statement](https://atcoder.jp/contests/abc060/tasks/abc060_b)

### Approach
The value of a%b shows one loop from a to a*b, i.e. the value of a%b and (a*(b+1))%b are identical, the value of 2a%b and (a*(b+2))%b are identical, and so forth. Hence, just need to look for the value of (a*i)%b, where i = 0..b.  
Since from the constraints, c < b, the value of c%b is always equal to the value of c.  
Therefore, ***in the process of looping from 0 to b, compare the value of (a*i)%b and c***, and if no congruency was found after the loop, then the objective is impossible to achieve, so print NO. Otherwise print YES.

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
  
  bool can = false;
  rep(i, b+1) {
    if ((a*i) % b == c) can = true;
  }
  
  cout << (can ? "YES" : "NO") << endl;
}
```