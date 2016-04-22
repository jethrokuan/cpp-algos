#include <bits/stdc++.h>

using namespace std;

long long abmodm(long long a, long long b, long long m) {
  if (b==0) return 1;
  if (b%2==0) {
    long long x = abmodm(a,b/2,m);
    return x*x%m;
  } else {
    return abmodm(a,--b,m)*a%m;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld\n", abmodm(a,b,c)); 
  }
  return 0;
}
