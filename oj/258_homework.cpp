#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int v[3000001];
  memset (v, 0, sizeof(v));
  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i]); 
  }

  sort(v, v+n);

  for (int j = 0; j<n; j++) {
    if (j) printf(" ");
    printf("%d", v[j]);
  }
  return 0;
}
