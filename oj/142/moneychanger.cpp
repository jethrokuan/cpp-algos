#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int INF = 1000000000;

int n, v, dp[10005];

int main () {
	scanf("%d%d", &n, &v);
	for (int i = 1; i <= v; ++i) dp[i] = INF;
	for (int i = 0, x; i < n; ++i) {
		scanf("%d", &x);
		for (int j = x; j <= v; ++j) 
			dp[j] = min(dp[j],dp[j-x]+1);
	}
	if (dp[v] == INF) printf("-1\n");
	else printf("%d\n", dp[v]);
}
