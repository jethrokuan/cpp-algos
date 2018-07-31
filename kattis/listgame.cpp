#include <iostream>
#include <vector>

using namespace std;

int num, x;


int main() {
  int curr = 2;
  int tot = 0;
  x = scanf("%d", &num);
  while (curr * curr <= num) {
    if (num % curr == 0) {
      tot++;
      num /= curr;
    } else {
      curr++;
    }
  }
  printf("%d", tot + 1);
  return 0;
}
