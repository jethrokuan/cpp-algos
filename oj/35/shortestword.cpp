#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; 
  string tmp,res;

  scanf("%d\n", &n);

  for (int i = 0; i<n; i++) {
    getline(cin,tmp);
    if (i == 0 || tmp.length() < res.length()) res = tmp;
  }

  cout << res;
  
  return 0;
}
