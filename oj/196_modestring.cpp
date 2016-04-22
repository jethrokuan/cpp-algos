#include <bits/stdc++.h>

using namespace std;

int c[1000],n,ans,m;

int main () {
	scanf("%d%d", &n, &m);
	for (int i = 0, t; i < n; i++, c[t]++) scanf("%d", &t);
	for (int i = 0; i < 1000; i++) if (c[i] < m && c[i] > ans) ans = c[i];
	printf("%d\n", ans);
}

