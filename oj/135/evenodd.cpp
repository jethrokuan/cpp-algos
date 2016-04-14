#include <bits/stdc++.h>

using namespace std;

int main() {
  char m[80];
  int n;
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    scanf("%s", m); 
    if (m[strlen(m)-1] & 1) printf("odd\n");
    else printf("even\n");
  }
  return 0;
}
