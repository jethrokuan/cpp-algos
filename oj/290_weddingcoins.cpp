#include <bits/stdc++.h>

using namespace std;

int main() {
  long long coins[] = {1000000,500000,100000,50000,10000,5000,1000,500,100,50,10,5,1};
  long long n ,count = 0;
  scanf("%lld", &n);
  for (int i= 0; i<13; i++) {
    count += n / coins[i];
    n = n % coins[i];
  }
  printf("%lld", count);
  return 0;
}
