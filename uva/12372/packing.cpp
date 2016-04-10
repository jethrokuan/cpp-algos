#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  scanf("%d", &tc); 
  for (int i = 0; i< tc; i++) {
    int l,w,h;
    printf("Case %d: ", i+1);
    scanf("%d %d %d", &l, &w, &h);
    if (l > 20 || w > 20 || h > 20) {
      printf("bad\n");
    } else {
      printf("good\n");
    } 
  }
  return 0; 
}
