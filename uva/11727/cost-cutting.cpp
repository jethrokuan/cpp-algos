#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  scanf("%d", &tc);
  for (int j = 0; j<tc; j++) {
    vector <int> a;
    for (int i = 0; i<3; i++) {
      int m;
      scanf("%d", &m);
      a.push_back(m);
    }
    sort(a.begin(), a.end());
    printf("Case %d: %d\n", j+1, a[1]);
  }
  return 0;
}
