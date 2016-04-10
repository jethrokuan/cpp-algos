#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  scanf("%d", &tc);

  while (tc--) {
    int n;
    scanf("%d", &n);
    int k = (abs(315*n+36962) % 100) / 10;
    printf("%d\n", k);
  }
  return 0;
}
