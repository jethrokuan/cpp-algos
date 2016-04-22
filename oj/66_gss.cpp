#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[110]; 
  scanf("%d", &n);
  for (int i=0;i<n;i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a+n);
  reverse(a,a+n);

  int count = 0;
  for (int j= 0; j<n; j++) {
    if (j % 4 != 3) count+= a[j];
  }
  printf("%d", count);
  return 0;
}
