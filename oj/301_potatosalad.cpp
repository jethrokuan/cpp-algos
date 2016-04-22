#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  int n[1000001];
  scanf("%d %d", &a, &b);
  for (int i=0; i<a; i++) {
    scanf("%d", &n[i]);
  }

  sort(n, n+a);
  reverse(n, n+a);

  int count;

  for (int j = 0; j< b; j++) {
    count += n[j];
  }

  printf("%d", count);
  
  return 0;
}
