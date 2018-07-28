#include <stdio.h>
#include <math.h>

using namespace std;

int x, n;

int main() {
  x = scanf("%d", &n);
  printf("%d", int(pow((1 + pow(2, n)), 2)));
  return 0;
}
