#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int count = 0;
  while (n >= 2) {
    n/=2;
    count++;
  }
  printf("%d", count);
  return 0;
}
