#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s;
  int a[10000];
  scanf("%d", &n); 
  scanf("%d", &s);
  memset(a,0,sizeof(a));
  for (int i = 0; i< n; i++ ){
    a[i] = i;
  }
  while (s--) {
    int p,q;
    scanf("%d %d", &p, &q);
    int k = a[p];
    a[p] = a[q];
    a[q] = k;
  }

  for (int i = 0;i<n; i++) {
    if (i) printf("\n");
    printf("%d",a[i]);
  }
  return 0;
}
