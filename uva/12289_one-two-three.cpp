#include <bits/stdc++.h>

using namespace std;

int main() {
  char s[10];
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    scanf("%s", s);
    if (strlen(s) == 5) {
      printf("3\n");
    } else {
      if (s[0] == 'o') {
        if (s[1] == 'n' || s[2] == 'e') {
          printf("1\n");
        } else {
          printf("2\n");
        }
      } else if (s[1] == 'n' && s[2] == 'e'){
        printf("1\n");
      } else {
        printf("2\n");
      }
    }
  }
  return 0;
}
