#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<P> p;
  int count = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    p.emplace_back(a, b);
  }
  rep(i, n) {
    if (p[i].first == p[i].second) {
      count++;
      if (count == 3) break;
      }
    else count = 0;
  }
  cout << (count == 3 ? "Yes" : "No") << endl;
}