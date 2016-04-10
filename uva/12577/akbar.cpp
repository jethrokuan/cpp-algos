#include <bits/stdc++.h>

using namespace std;

int main() {
  char a[10];
  int i = 1;
  while (scanf("%s", a) && strcmp(a,"*") != 0) {
    if (strcmp(a, "Hajj") == 0) {
      printf("Case %d: Hajj-e-Akbar\n", i++); 
    } else {
      printf("Case %d: Hajj-e-Asghar\n", i++);
    }
  }
  return 0;
}
