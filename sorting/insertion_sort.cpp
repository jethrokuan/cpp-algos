#include <bits/stdc++.h>

using namespace std;

int a[5] = {5, 2, 4, 3, 1};

int main () {
  for (int i = 1; i<5; i++) {
    int key = a[i];
    int j = i-1; // j is the last item on the left side, which is completely sorted
    while (j >= 0 && a[j] > key) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = key;
  }  
  
  for (int m = 0; m<5; m++) {
    printf("%d ", a[m]);
  }
  return 0;
}
