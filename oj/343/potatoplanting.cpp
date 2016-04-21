#include <bits/stdc++.h>

using namespace std;

int main() {
  int h,w,n;

  int count = 0;

  scanf("%d %d %d", &h, &w, &n);
  for (int i = 0; i<h; i++) {
    for (int j = 0; j<w; j++) {
      if (count < n) printf("X");
      else printf("O");
      count++;
    }
    printf("\n");
  }
  return 0;
}
