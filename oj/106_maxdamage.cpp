#include <bits/stdc++.h>

using namespace std;

int main() {
  double m;
  char c;
  int p,s;
  int atk = 0;
  
  scanf("%c", &c);
  if (c == 'G') m = 1.6;
  else m = 1.7;
  
  scanf("%d%d", &p, &s);
  for (int i=0,t;i<4;i++){
    scanf("%d", &t);
    atk += t;
  }

  cout << fixed << setprecision(2);
  
  cout <<  m*(4*p + s) * atk / 100;
  
  
  return 0;
}
