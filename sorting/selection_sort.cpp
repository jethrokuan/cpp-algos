#include <bits/stdc++.h>

using namespace std;

int a[5] = {5,2,3,1,4};
int main() {
  for (int i = 0; i<4; i++) {
    int smallest = i;
    for (int j = i + 1; j<5; j++) {
      if (a[j] < a[smallest]) {
        smallest = j;
      }
    }
    int key = a[smallest];
    a[smallest] = a[i];
    a[i] = key;
  }
  
  for (int m=0; m<5; m++) {
    printf("%d ",a[m]);
  }
  
  return 0;
}
