#include <iostream>

using namespace std;

char c;

int main() {
  char prev = 0;
  while (scanf("%c", &c) == 1) {
    if (c != prev) {
      prev = c;
      printf("%c", c);
    }
  }
}
