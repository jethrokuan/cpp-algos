#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int count = 0;
  while(scanf("%d", &n) && n != -1) {
    count += n;
  }
  printf("%d", count);
  return 0;
}
