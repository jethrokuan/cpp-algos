#include <bits/stdc++.h>

using namespace std;

bool isprime(int p) {
  if (p ==1) return false;
  if (p ==2) return true;
  for (int i=2;i<int(sqrt(p)+1);i++) {
    if (p % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i=0,p; i<n;i++) {
    scanf("%d", &p);
    printf("%d is a %s number.\n", p, isprime(p) ? "prime" : "composite"); 
  }
  
  return 0;
}
