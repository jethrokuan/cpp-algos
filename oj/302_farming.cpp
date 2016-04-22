#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  char c;
  int count = 0;
  scanf("%d %d", &h, &w);
  for (int i= 0; i<h; i++) {
    for (int j = 0; j<w+1; j++) {
      scanf("%c",&c);
      if (c == '#') count++;
    }
  }
  printf("%d", count);
  return 0;
}
