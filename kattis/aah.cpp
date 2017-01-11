#include <bits/stdc++.h>

using namespace std;

string j,d;
int main() {
  getline(cin,j);
  getline(cin,d); 
  if (j.length() < d.length()) {
    cout << "no";
  } else {
    cout << "go";
  }
  return 0;
}
