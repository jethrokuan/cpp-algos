#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,m;
  int v[510];
  int w[510];
  scanf("%d %d", &n ,&m);
  for (int i=1;i<=n;i++) {
    scanf("%d %d", &w[i], &v[i]);
  }

  int dp[510][510];
  memset(dp,0,sizeof(dp));
  
  for (int j = 1; j <= n; j++) {
    for (int k=0; k<=m; k++) {
      if (w[j] > k) dp[j][k] = dp[j-1][k];
      else dp[j][k] = max(dp[j-1][k], dp[j-1][k-w[j]] + v[j]);
    }
  }

  printf("%d",dp[n][m]);
  
  return 0;
}
