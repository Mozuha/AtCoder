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