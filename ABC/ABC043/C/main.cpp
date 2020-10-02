#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  // The total cost will be its minimum when transforming all integers into rounded mean of all integers
  int mean = round((float)accumulate(a.begin(), a.end(), 0) / (float)n);
  int cost = 0;
  for (auto c : a) cost += (c - mean) * (c - mean);
  cout << cost << endl;
}