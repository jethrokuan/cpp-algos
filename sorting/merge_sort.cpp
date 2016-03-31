#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& a, int p, int q, int r)
{
  vector<int> l(a.begin() + p, a.begin() + q + 1);
  vector<int> ri(a.begin() + q + 1, a.begin() + r + 1);

  int n1 = q - p + 1;
  int n2 = r - q;

  int i, j; i = j = 0;

  while (i < n1 && j < n2) {
    if (l[i] < ri[j]) {
      a[p++] = l[i++];
    } else {
      a[p++] = ri[j++];
    }
  }

  while (i < n1) {
    a[p++] = l[i++];
  }

  while (j < n2) {
    a[p++] = ri[j++];
  }
}

void merge_sort(vector<int>& a, int p, int r)
{
  if (p < r) {
    int q = (p + r) / 2;
    merge_sort(a, p, q);
    merge_sort(a, q + 1, r);
    merge(a, p, q, r);
  }
}

int main() {
  vector <int> v = {5,2,1,4,3};
  merge_sort(v,0,4);

  vector<int> path;

  for (int i=0; i<v.size();i++){
    printf("%d ", v[i]);
  }
  
  return 0;
}
