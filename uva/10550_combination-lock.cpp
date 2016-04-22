#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,c,d;
  
  while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF) {
    if (a == 0 && b == 0 && c == 0 && d == 0) break;
        
    int count = 80;
    if (a >= b) {
      count += a - b;      
    } else {
      count += a + (40 - b);
    }
    
    count += 40;
    if(b > c) {
      count += (40 - b) + c;  
    } else {
      count += c - b;      
    }
    
    if (c >= d) {
      count += c - d; 
    } else {
      count += c + (40 - d);      
    }
    printf("%d\n", count * 9); 
  } 
  return 0;
}
