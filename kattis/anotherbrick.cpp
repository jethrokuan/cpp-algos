#include <iostream>
using namespace std;

int x;
int curr;
int h,w,n,v;
int t = 0;

int main() {
  x = scanf("%d %d %d", &h, &w, &n);
  for (int i = 0; i < n; i++) {
    x = scanf("%d", &v);
    t += v;
    if (t == w) {
      curr++;
      if (curr == h) {
        printf("YES");
        return 0;
      }
      t = 0;
    } else if (t > w) {
      printf("NO");
      return 0;
    } else {
      continue;
    }
  }
  printf("NO");
  return 0;
}
