#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1e9;

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> std_pos, ckpt;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    std_pos.push_back(P(x, y));
  }
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    ckpt.push_back(P(x, y));
  }
  
  rep(i, n) {
    int dist = INF, ckpt_idx = 0;
    rep(j, m) {
      if (abs(std_pos[i].first - ckpt[j].first) + abs(std_pos[i].second - ckpt[j].second) < dist) {
        dist = abs(std_pos[i].first - ckpt[j].first) + abs(std_pos[i].second - ckpt[j].second);
        ckpt_idx = j;
      }
    }
    cout << ++ckpt_idx << endl;
  }
}