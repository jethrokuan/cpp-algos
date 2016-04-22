#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  while (scanf("%d", &tc) && tc != 0) {
    int x,y;
    scanf("%d %d", &x, &y);
    while (tc--) {
      int x2,y2;
      scanf("%d %d", &x2, &y2);
      if (x2 == x || y2 == y) {
        printf("divisa\n");
      } else {
        if(y2 > y) {
          printf("N");
        } else {
          printf("S");
        }
        if (x2 > x) {
          printf("E\n"); 
        } else {
          printf("O\n");
        }
      }
    }
  }
  return 0;
}
