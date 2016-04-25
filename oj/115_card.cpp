#include <bits/stdc++.h>

using namespace std;

deque<int> q;

int size, n;

char ops[100001];

void op(char s) {
  int x, y;
  switch (s) {
  case 'A':
    x = q.front();
    q.pop_front();
    q.push_back(x);
    break;
  case 'B':
    x = q.front();
    q.pop_front();
    y = q.front();
    q.pop_front();
    q.push_back(y);
    q.push_front(x);
    break;
  default:
    break;
  }
}

int main() {
  scanf("%d %d", &size, &n);
  scanf("%s", ops);

  for (int i=0;i<size;i++) {
    q.push_back(i);
  }

  uint len = strlen(ops);

  for (uint j=0;j<len;j++) {
    op(ops[j]);
  }

  for (int x=n-1;x<=n+1;x++) {
    if(x !=0 && x !=size) {
      printf("%d ", q[x]);
    }
  }
  
  return 0;
}
