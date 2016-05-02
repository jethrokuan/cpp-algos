#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int VISITED = 1;
const int UNVISITED = -1;

queue<int> q;
vi d(10, UNVISITED);

vector<vi> AdjList(10, vector<int>());

int main() {
  string s;
  int i = 0;
  while (getline(cin,s)) {
    stringstream ss(s);
    int a;
    while (ss >> a) {
      AdjList[i].push_back(a);
    }
    i++;
  }

  q.push(0);
  d[0] = VISITED;

  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int i =0;i<(int)AdjList[u].size(); i++) {
      int v = AdjList[u][i];
      if (d[v] == UNVISITED) {
        printf("Visited %d\n", v);
        d[v] = VISITED;
        q.push(v);
      }
    }
  }
  
  return 0;
}
