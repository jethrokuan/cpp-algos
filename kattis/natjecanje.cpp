#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, s, r;
  int count = 0;
  scanf("%d %d %d", &n, &s, &r);
  vector<int> damaged;
  vector<int> reserved;

  damaged.resize(n+1);
  reserved.resize(n+1);

  for (int i = 0; i < s; i++) {
    int tmp;
    scanf("%d", &tmp);
    damaged[tmp] = 1;
  }

  for (int i = 0; i < r; i++) {
    int tmp;
    scanf("%d", &tmp);
    reserved[tmp] = 1;
  }

  // Greedily choose earlier team.

  for (int i = 0; i <= n; i++) {
    if (damaged[i]) {
      if (reserved[i]) {
        reserved[i] = 0;
      } else if (i > 0 && reserved[i-1]) {
        // We could set reserved[i-1] to 0, but
        // that's not actually necessary
      } else if (reserved[i+1]) {
        reserved[i+1] = 0;
      } else {
        count++;
      }
    }
  }

  printf("%d\n", count);

  return 0;
}
