#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> grid(h);
  rep(i, h) cin >> grid[i];
  
  int count = 0;
  rep(i, h) rep(j, w) {
    if (grid[i][j] == '.') {
      if (i+1 < h) if (grid[i+1][j] == '.') count++;
      if (j+1 < w) if (grid[i][j+1] == '.') count++;
    }
  }

  cout << count << endl;
}