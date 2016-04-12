#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string s;
  scanf("%d", &n);
  cin >> s;

  for (int i = 0; i<n; i++) {
    for (int j = 0; j<i; j++) {
      printf(" "); 
    }
    cout << s << endl;
  }
  return 0;
}
