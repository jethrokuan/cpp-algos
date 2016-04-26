#include <bits/stdc++.h>

using namespace std;

int h, w;

void print(int start, int chars, int end) {
  for (int i=0;i<start;i++) printf(" ");
  for (int j=0;j<chars;j++) printf("*");
  for (int k=0;k<end;k++)printf(" ");
}

int main() {
  int h,w;
  scanf("%d %d",&h,&w);
  int mid = (h-1) / 2;
  int chars = w - mid;
  for (int i = 0; i<=mid; i++) {
    print(i, chars, w-chars-i);
    printf("\n");
  }

  for (int j=1;j<=mid;j++) {
    print(w-chars-j,chars,j);
    if (j != mid) printf("\n");
  }
  
  return 0;
}
