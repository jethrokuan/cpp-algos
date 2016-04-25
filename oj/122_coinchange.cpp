#include <bits/stdc++.h>

using namespace std;

int memo[10001][51];
int c[51];

int count(int v, int n) {
  if (v == 0) return 1;
  if (n == 1) return memo[v][n] = (v % c[n] == 0) ? 1 : 0;
  if (memo[v][n] >= 0) return memo[v][n];
  if (c[n] > v) return memo[v][n] = count(v,n-1)% 13371337;
  return memo[v][n] = (count(v,n-1) + count(v-c[n], n))% 13371337;
}

int main() {
  int n,v;
  scanf("%d %d", &n, &v);
  memset(memo,-1,sizeof(memo));
  
  for (int i=1;i<=n;i++) {
    scanf("%d", &c[i]);
  }

  int combi = count(v,n); 

  printf("%d", combi);
  return 0;
}
