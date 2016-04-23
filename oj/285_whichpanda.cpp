#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int num = 0;
  int max = 0;
  int maxcount = 0;
  for (int i = 0,t;i<n;i++) {
    scanf("%d", &t);
    if (t > max) {
      num = i+1;
      max = t;
      maxcount = 1;
    } else if (t == max) {
      maxcount++;
    }
  }

  if (maxcount > 1) printf("MMMMMEEEEOOOOOWWWW!!!!!");
  if (maxcount == 1) printf("%d", num);
  return 0;
}
