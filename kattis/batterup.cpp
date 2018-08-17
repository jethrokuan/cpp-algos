#include <iostream>

using namespace std;

int main() {
  int n, tmp, count = 0;
  scanf("%d", &n);
  double sum = 0.0;
  for (int i =0; i < n; i++) {
    scanf("%d", &tmp);
    if (tmp < 0) continue;
    count++;
    sum += tmp;
  }
  printf("%.10f", sum / count);
  return 0;
}
