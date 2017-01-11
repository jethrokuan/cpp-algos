#include <bits/stdc++.h>

using namespace std;

int cmax, c;

int main() {
  cmax = 0;
  for (int i =1; i<=5; i++) {
    int g1, g2, g3, g4;
    scanf("%d %d %d %d", &g1, &g2, &g3, &g4);
    int sum = g1 + g2 + g3 + g4;
    if (sum > cmax) {
      cmax = sum;
      c = i;
    }
  }
  printf("%d %d", c, cmax);
  return 0;
}
