#include <bits/stdc++.h>

using namespace std;

int main() {
  int i;
  scanf("%d", &i);
  while (i--) {
    int j;
    int k = 1;
    scanf("%d", &j);
    for (int m = 1; m<j+1; m++) {
      if (m % 2 == 0) {
        k++;
      } else {
        k *= 2;
      }
    }
    printf("%d\n", k);
  }
  return 0;
}
