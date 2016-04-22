#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
  if (n == 0 || n == 1) {
    return 0;
  }
    
  for (int i = 2; i* i<=n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
} 


int main() {
  int a; 
  for (int i=0;i<4;i++) {
    scanf("%d", &a); 
    if (!prime(a)) {
      printf("Wrong code");
      return 0;
    }
    else continue;
  }
  printf("Opening...");
  return 0;
}
