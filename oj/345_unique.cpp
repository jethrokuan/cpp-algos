#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> v;
  v.resize(n,0);
  for (int i=0;i<n;i++ ){
    scanf("%d", &v[i]);
  }

  sort(v.begin(), v.end());
  printf("%d",int(unique(v.begin(), v.end())-v.begin()));
  
  return 0;
}
