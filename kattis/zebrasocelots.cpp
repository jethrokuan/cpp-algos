#include <math.h>
#include <iostream>

typedef unsigned long long ull;

using namespace std;

int x;
unsigned int num;
char c;
ull sum = 0LLU;
ull step;

int main() {
  x = scanf("%u", &num);
  step = 1LLU << (num - 1);
  while (num--) {
    x = scanf(" %c", &c);
    if (c == 'O') {
      sum += step;
    }
    step >>= 1U;
  }
  printf("%llu", sum);
  return 0;
}
