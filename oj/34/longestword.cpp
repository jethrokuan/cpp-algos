#include <bits/stdc++.h>

using namespace std;

string s;
string res = "";
int tc;

int main() {
  scanf("%d", &tc);
  while (tc--) {
    cin >> s;
    if (s.length() > res.length()) res = s;
  }
  cout << res;
  return 0;
}
