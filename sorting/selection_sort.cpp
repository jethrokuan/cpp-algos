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
  for (int i = 0; i<99; i++) {
    int smallest = i;
    for (int j = i + 1; j<100; j++) {
      if (a[j] < a[smallest]) {
        smallest = j;
      }
    }
    int key = a[smallest];
    a[smallest] = a[i];
    a[i] = key;
  }
  
  for (int m=0; m<100; m++) {
    printf("%d ",a[m]);
  }
  
  return 0;
}
