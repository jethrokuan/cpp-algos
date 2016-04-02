#include <bits/stdc++.h>

using namespace std;

int a[100];

void populatearray (int* a) {  
  srand (time(NULL));
  for (int j=0; j<100; j++) {
    a[j] = 1 + rand() % 100;
  }
}

int main () {
  populatearray(a);
  for (int i = 1; i<100; i++) {
    int key = a[i];
    int j = i-1; // j is the last item on the left side, which is completely sorted
    while (j >= 0 && a[j] > key) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = key;
  }  
  
  for (int m = 0; m<100; m++) {
    printf("%d ", a[m]);
  }
  return 0;
}
