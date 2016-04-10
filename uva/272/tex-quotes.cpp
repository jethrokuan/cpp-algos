#include <bits/stdc++.h>

using namespace std;

int main() {
  char a;
  bool start = true;
  while (scanf("%c", &a) != EOF) {
    if (a == '\"') {
      if (start) {
        printf("``");
        start = false;
      } else {
        printf("''");
        start = true;
      }
    } else {
      printf("%c", a);
    }
  }
  return 0;
}
