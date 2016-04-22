#include <bits/stdc++.h>

using namespace std;

int main() {
  char c[101];
  int peanuts = 0, potatoes = 0;
  int h,w;
  scanf("%d%d",&h,&w);
  for (int i = 0;i<h;i++) {
    scanf("%s", c);
    for (int j=0;j<w;j++) {
      switch(c[j]) {
      case 'O':
        potatoes++;
        break;
      case 'N':
        peanuts++;
        break;
      default:
        break;
      }
    }
  }

  printf("%d %d",potatoes, peanuts);
  return 0;
}
