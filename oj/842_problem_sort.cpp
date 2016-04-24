#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> v;

bool strComp(string a, string b) {
  if (a.length() != b.length()) return a.length() < b.length();
  else {
    for (uint x = 0; x< a.length(); x++) {
      if (a[x] != b[x]) return a[x] < b[x];
    }
  }
  return false;
}

int main() {
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    string t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end(), strComp);

  for (int j=0;j<n;j++) {
    cout << v[j] << " ";
  }

  return 0;
}
