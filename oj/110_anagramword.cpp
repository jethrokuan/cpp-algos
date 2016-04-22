#include <bits/stdc++.h>

using namespace std;

int main() {
  string s1, s2;

  getline(cin,s1);
  getline(cin,s2);

  int c1[30],c2[30];

  memset(c1, 0, sizeof(c1));
  memset(c2, 0, sizeof(c2));
  
  for (char& c : s1) {
    if (65<=c && c<=90) {
      c1[c-65]++;
    } else if (97<=c && c<=122) {
      c1[c-97]++;
    }
  }

  for (char& c : s2) {
    if (65<=c && c<=90) {
      c2[c-65]++;
    } else if (97<=c && c<=122) {
      c2[c-97]++;
    }
  }

  for (int i=0; i<30; i++) {
    if (c1[i] != c2[i]) {
      printf("NO");
      return 0;
    }
  }

  printf("YES");  
  return 0;
}
