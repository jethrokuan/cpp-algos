#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,e;
  vector <int> v[100000];
  scanf("%d %d", &n, &e);
  while (e--) {
    int a,b;
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }

  for (int i = 1; i<=n; i++) {
    for (uint j = 0; j<v[i].size(); j++) {
      if (j) printf(" ");
      printf("%d",v[i][j]); 
    }
    printf("\n");
  }
  return 0;
}
