#include <bits/stdc++.h>

using namespace std;

int a[5]={5,2,3,4,1};

int main() {
  for (int i = 1; i<5; i++) {
    int j = i;
    while (j>0) {
      if (a[j] < a[j-1]) {
        int key = a[j];          
        a[j] = a[j-1];
        a[j-1] = key;
      }
      j--;
    }
  }

  for (int m = 0; m<5; m++) {
    printf("%d ", a[m]);
  }
  return 0; 
}
