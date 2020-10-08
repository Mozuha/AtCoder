#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  string o, e;
  cin >> o >> e;
  string res;
  rep(i, min(o.size(), e.size())) {
    res.push_back(o[i]);
    res.push_back(e[i]);
  }
  if (o.size() > e.size()) res.push_back(o[o.size()-1]);
  cout << res << endl;
}