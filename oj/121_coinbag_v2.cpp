#include <bits/stdc++.h>

using namespace std;

int n,m;
int w[505];
int v[505];
int dp[505][505];

int val(int id, int remW) {
  if (dp[id][remW] != 0) return dp[id][remW];
  if (remW == 0) return 0;
  if (id == n) return 0;
  if (remW < w[id]) return dp[id][remW] = val(id+1,remW);
  else return dp[id][remW] = max(val(id+1,remW),v[id]+val(id+1,remW-w[id])); 
}

int main() {
  scanf("%d %d", &n, &m);
  for (int i=0;i<n;i++) {
    scanf("%d %d", &w[i], &v[i]);
  }

  memset(dp, 0, sizeof(dp));

  printf("%d", val(0,m));
  return 0;
}
