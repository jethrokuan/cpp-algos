#include <bits/stdc++.h>

using namespace std;

int m = 0;
int c = 0;

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0 ,t;i<n; i++) {
    scanf("%d", &t);
    if (t == -1) {
      if (c > m) m = c;
      c = 0;
    } else {
      c += t;
    }
  }

  if (c > m) m = c;

  printf("%d", m);

  return 0;
}
