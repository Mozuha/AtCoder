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