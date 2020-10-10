#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

/*
a%bの値は, aからa*bまでで一周する. (a%bとa*(b+1)%bの値, 2a%bとa*(b+2)%bの値はそれぞれ同じ)
よって, aをb回足す過程で各回a%bとcの値を比較し, b回経ってもfalseならfalse.
*/

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  bool can = false;
  rep(i, b+1) {
    if ((a*i) % b == c) can = true;
  }
  
  cout << (can ? "YES" : "NO") << endl;
}