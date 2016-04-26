#include <bits/stdc++.h>

using namespace std;

deque<long long> x;

int main() {
  long long n, p;
  long long m = 0;
  long long sum = 0;
  scanf("%lld %lld", &n, &p);
  for (long long i=0,t; i<n; i++) {
    scanf("%lld", &t);
    sum += t;
    x.push_back(t);
    while (sum > p && x.size() != 0) {
      sum -= x.front();
      x.pop_front();
    }
     
    m = max(m, (long long int)(x.size()));
  }

  printf("%lld", m);
  return 0;
}
