#include <bits/stdc++.h>

using namespace std;

int a[5] = {5, 2, 3, 1, 4};
int v = 3;
int found = -1;

int main() {
  for (int i=0; i<5; i++) {
    if (v == a[i]) {
      found = i;
      break;
    }
  }

  printf("%d", found);
  return 0;
}
