#include <bits/stdc++.h>

using namespace std;

int a[100];

void populatearray (int* a) {
  srand (time(NULL));
  for (int j=0; j<100; j++) {
    a[j] = 1 + rand() % 100;
  }
}

int main() {
  populatearray(a);
  for (int i = 1; i<100; i++) {
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

  for (int m = 0; m<100; m++) {
    printf("%d ", a[m]);
  }
  return 0; 
}
