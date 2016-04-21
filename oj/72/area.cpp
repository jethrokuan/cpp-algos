#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  long long a,b;
  long long count = 0;
  scanf("%d",&n);
  while (n--) {
    scanf("%lld%lld",&a,&b);
    count += a*b;
  }

  printf("%lld", count);
  return 0;
}
