#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, max;
  int d[1010], n[1010];
  scanf("%d", &s);
  for (int i=0;i<s;i++) scanf("%d", &d[i]);
  for (int j=0;j<s;j++) scanf("%d", &n[j]);
  sort(d,d+s);
  sort(n, n+s);
  reverse(n, n+s); 

  scanf("%d", &max);

  int count = 0;
  for (int k=0;k<s;k++) {
    int t = d[k] + n[k] - max;
    if (t>0) count += t;
  }
  printf("%d", count*100);
  return 0;
}
