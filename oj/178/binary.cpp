#include <bits/stdc++.h>

using namespace std;

int main() {
  char bin[100];
  scanf("%s", bin);
  int count = 0;
  int len = strlen(bin);
  for (int i=0; i<len; i++) {
    if (bin[i]=='1') count += pow(2.0,len-i-1);
  }
  printf("%d",count);
  return 0;
}
