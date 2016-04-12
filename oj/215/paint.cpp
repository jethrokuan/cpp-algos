#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  vector < pair<int, int> > v(21000,make_pair(0,0));
  scanf("%d", &n);

  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i].second);
  }

  for (int i = 0; i<n; i++) {
    scanf("%d", &v[i].first);
  }

  sort(v.rbegin(),v.rend()); 

  int c = 0;
  int cost = 0;
  for (vector<pair<int,int>>::iterator it = v.begin(); it != v.end(); it++) {
    cost += it->second + c*it->first;
    c++;
  }

  printf("%d\n", cost);

  return 0;
}
