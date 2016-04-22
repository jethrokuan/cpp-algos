#include <bits/stdc++.h>

using namespace std;

bool hexa(char *h) {
  if (h[0] != '#') return false;
  for (uint i=1; i<7; i++) {
    if ((h[i] >= 48 && h[i] <=57 ) || (h[i] >= 65 && h[i] <= 70)) continue;
    else return false;
  }
  return true;
}

int main() {
  int n;
  scanf("%d", &n);
  char h[10];
  for (int i=0; i<n; i++) {
    scanf("%s", h);
    if (hexa(h)) printf("Hexadecimal\n");
    else printf("Not Hexadecimal\n");
  }
    
  return 0;
}
