#include <bits/stdc++.h>

using namespace std;

int main() {
  int l, t;
  scanf("%d %d", &l, &t);
  t--;
  while (t--) {
    if (l == 1) {
      printf("-1");
      return 0;
    }
    
    if (l % 2 == 0) {
      l = l / 2; 
    } else {
      l = 3* l + 1;
    }
  }
  
  printf("%d", l);
  return 0;
}
