#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  int amt = 0;
  scanf("%d", &tc);
  while (tc--) {
    char a[10];
    int b;
    scanf("%s", a);
    if (strcmp(a, "donate") == 0) {
      scanf("%d", &b);
      amt += b;
    } else {
      printf("%d\n", amt);
    }
  }
  return 0;
}
