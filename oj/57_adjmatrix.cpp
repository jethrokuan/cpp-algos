#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, e;
  scanf("%d %d", &n, &e);

  int m[50][50];
  memset(m,0,sizeof(m));
  int a, b;
  while (e--) {
    scanf("%d %d", &a, &b);
    m[a-1][b-1] = 1;
    m[b-1][a-1] = 1;
  }

  for (int i = 0; i<n; i++) {
    for (int j = 0;j<n; j++) {
      printf("%d", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
