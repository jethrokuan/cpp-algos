#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    int n;
    scanf("%d", &n);
    int l, r;
    for (int j = 0; j<n; j++) {
      int a;
      scanf("%d", &a);
      if (j == 0) {
        l = a;
        r = a;
      }

      if (a < l) {
        l = a;
      }

      if (a > r) {
        r = a;
      } 
    }
    printf("%d\n", 2*(r-l));
  }
  return 0; 
}
