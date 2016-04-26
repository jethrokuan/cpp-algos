#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  vector<int> primes;
  scanf("%d",&x);
  primes.push_back(2);

  int n = 3;

  while ((int)primes.size() < x) {
    bool prime = true;
    for (uint i=0;i<primes.size();i++) {
      if (n % primes[i] == 0) {
        prime = false;
        break;
      } 
    }
    if (prime == true) primes.push_back(n);
    n++;
  }

  printf("%d", n-1);
  return 0;
}
