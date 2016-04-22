#include <bits/stdc++.h>

using namespace std;

string s;

bool number(string s) {
  for (char& c : s) {
    if (48<=c && c <=57) continue;
    else return 0; 
  }
  return 1;
}

int main() {
  getline(cin,s);
  if (number(s)) {
    printf("%d", stoi(s)*2); 
  } else {
    for (char& c : s) c = toupper(c);
    cout << s;
  }
  return 0;
}
