#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  int count = 0;
  string s;
  scanf("%d %d", &n, &m);

  while (m--) {
    cin >> s;
    if (s == "LAND") {
      count++;
      if (count > n) {
        printf("PLAN REJECTED\n");
        return 0;
      }
    } else if (s == "LEAVE") {
      count--;
      if (count < 0) {
        printf("PLAN REJECTED\n");
        return 0;
      }
    } else if (s == "EVACUATE") {
      count = 0;
    }
  }
  printf("PLAN ACCEPTED\n");
  return 0;
}
