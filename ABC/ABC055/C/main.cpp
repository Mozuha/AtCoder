#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

/*
If n <= m/2, S remains after using all C, thus the answer is m/2, the maximum number of S that C can form.
Else, use all S, then use two C to form one S and combine it with two C, i.e. use four C, thus the answer
is n + ((m-2n)/4), the number of Scc that can form w/o any operation (n+(m-2n)), plus the number of Scc that
remaining C can form by themselves ((m-2n)/4).
*/

int main() {
  ll n, m;
  cin >> n >> m;
  cout << (n <= m/2 ? n + (m-(n*2))/4 : m/2) << endl;
}