#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int l = n*3 - 2;
  int h = n*2 - 1;

  for (int j=1;j<=h;j++) {
    int spaces;
    int x;
    if (j <= n) {
      spaces = n - j;
    } else {
      spaces = j - n; 
    }
    x = l-2*spaces;
    for (int m=0;m<spaces;m++) {
      printf(" ");
    }
    for (int y=0;y<x;y++) {
      printf("x");
    }
    printf("\n");
  }
  return 0;
}
