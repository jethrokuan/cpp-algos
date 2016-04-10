#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int x = 1;
  while (scanf("%d", &n) && n != 0) {
    int a = 0;
    int b = 0;
    int i;
    while (n--) {
      scanf("%d", &i);
      if (i == 0) {
        a++;
      } else if (0<i && i<100) {
        b++;
      } 
    }
    printf("Case %d: %d\n", x++, b-a);
  }
  return 0;
}
