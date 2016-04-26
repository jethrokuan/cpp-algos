#include <bits/stdc++.h>

using namespace std;

long long pls(vector<int> a) {
  long long x = 0;
  for (uint i = 0; i<a.size(); i++) { 
    x += a[i];
  }
  return x;
}

int hi(vector<int> a) {
  return a.back();
}

long long med(vector<int> a) {
  size_t size = a.size();
  if (size % 2 == 0) {
    return a[size/2 -1] + a[size/2];
  } else {
    return a[(size-1)/2] * 2;
  }
}

long long sum[50001];
int highest[50001];
double median[50001];

bool comp(pair<int,vector<int> > a, pair<int, vector<int> > b) {
  int y = a.first;
  int z = b.first;
  if (sum[y] != sum[z]) return sum[y] > sum[z];
  else if (highest[y] != highest[z]) return highest[y] > highest[z];
  else if (median[y] != median[z]) return median[y] > median[z];
  else return false;
}

int main() {
  vector< pair <int, vector<int> > > v (50000,make_pair(0,vector<int>()));
  int n,s;
  scanf("%d %d",&n, &s);
  for (int i=0;i<n;i++) {
    v[i].first = i+1;
    for (int j=0,y;j<s;j++) {
      scanf("%d", &y);
      v[i].second.push_back(y);
    }
  }

  for (int j=0;j<n;j++) {
    sort(v[j].second.begin(),v[j].second.end());
    sum[j+1] = pls(v[j].second);
    highest[j+1]=hi(v[j].second);
    median[j+1]=med(v[j].second);
  }

  stable_sort(v.begin(), v.begin()+n, comp);

  for (int i=0;i<n;i++) {
    printf("%d\n", v[i].first);
  }
  return 0;
}
