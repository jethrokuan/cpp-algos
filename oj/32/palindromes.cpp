#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  getline(cin,s);
  for (auto & c : s) c = toupper(c);

  string s1 = s;
    
  reverse(s.begin(), s.end());

  if (s.compare(s1) == 0) printf("Yes");
  else printf("No"); 
  
  return 0;
} 
