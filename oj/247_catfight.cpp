#include <bits/stdc++.h>

using namespace std;

deque<long long> x;

int main() {
  long long n, p;
  long long m = 0;
  long long sum = 0;
  long long c = 0;
  scanf("%lld %lld", &n, &p);
  for (long long i=0,t; i<n; i++) {
    scanf("%lld", &t);
    sum += t;
    c++;
    x.push_back(t);
    if (sum < p) {      
      if (c > m) m = c;      
    } else {
      while (sum > p && x.size() != 0) {
        long long v = x.front();
        sum -= v;
        c--;
        x.pop_front();
      }
    }
  }

  printf("%lld", m);
  return 0;
}
