#include <bits/stdc++.h>

using namespace std;

const int x = 1000000007;
int memo[1010][1010];
char c[1010][1010];

int h1,w1;

int ways(int h, int w) {
  if (memo[h][w] >= 0) return memo[h][w];
  else if (c[h][w] == 'X') memo[h][w] = 0;
  else if (c[h][w] == '.') {
    if (h==0 && w==0) return memo[h][w] = 1;
    else if (h==0) memo[h][w] = ways(h,w-1);
    else if (w==0) memo[h][w] = ways(h-1, w);
    else memo[h][w] = ways(h-1,w) + ways(h,w-1); 
  }
  memo[h][w] = memo[h][w] % x;
  return memo[h][w];
}

int main() {
  scanf("%d %d\n", &h1, &w1);
  for (int i=0;i<h1;i++) {
    scanf("%s",c[i]);
  }

  memset(memo, -1, sizeof(memo));

  printf("%d", ways(h1-1,w1-1));
  return 0;
}
