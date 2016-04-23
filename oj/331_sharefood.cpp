#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n,m;
  scanf("%lld %lld", &n, &m);
  long long c = n / (m+1);
  long long r = n - c*m;

  printf("%lld %lld", c, r);
  return 0;
}
