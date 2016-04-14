#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s;
  int a[1010];
  scanf("%d %d", &n, &s);
  for (int i=0;i<n;i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a+n);
  reverse(a, a+n);

  int count = 0;
  
  for (int m=0;m<n;m++) {
    if (m<s) {
      count += a[m];
    } else {
      count += a[m]*2;
    }
  }
  printf("%d", count);
  return 0;
}
