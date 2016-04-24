#include <bits/stdc++.h>

using namespace std;
char small[1001];
char caps[1001];
char cr;
int main() {
  int S=0;
  int C=0;
  while (scanf("%c", &cr) != EOF) {
    if (cr >= 'A' && cr <= 'Z') {
      caps[C] = cr;
      C++;
    } else if (cr >= 'a' && cr <= 'z') {
      small[S] = cr;
      S++;
    } 
  }    
  
  for (uint j=0;j<strlen(caps);j++) {
    printf("%c", caps[j]);
  }

  for (uint i=0;i<strlen(small);i++) {
    printf("%c", small[i]);
  }

  return 0;
}
