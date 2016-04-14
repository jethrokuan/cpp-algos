#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int s = int(sqrt(n));
  if (s * s == n) {
    printf("yes");
  } else {
    printf("no");
  }
  return 0;
}
