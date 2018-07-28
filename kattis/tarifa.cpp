#include <stdio.h>
#include <math.h>

using namespace std;

int m,n;

int x;

int main() {
  int c = 0;
  int d;
  x = scanf("%d %d", &m, &n);

  for (int i = 0; i < n; i++) {
    x = scanf("%d", &d);
    c += m - d;
  }

  printf("%d", c + m);
  return 0;
}
