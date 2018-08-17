#include <iostream>

using namespace std;

int main() {
  int total = 0;
  int lower = 0;
  int upper = 0;
  int whitespace = 0;
  int symbols = 0;
  char s[100001];
  scanf("%s", s);
  for (int i = 0; i < 100001; i++) {
    if (s[i] == '\0') break;
    if (s[i] == 95) whitespace++;
    else if (s[i] < 123 && s[i] > 96) lower++;
    else if (s[i] < 91 && s[i] > 64) upper++;
    else symbols++;
    total++;
  }
  printf("%.10f\n%.10f\n%.10f\n%.10f\n",
         (double)whitespace/total,
         (double)lower/total,
         (double)upper/total,
         (double)symbols/total);
  return 0;
}
