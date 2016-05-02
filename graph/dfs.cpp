#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num;
vector<vi> AdjList;

const int VISITED = 1;
const int UNVISITED = -1;

void dfs(int u) {
  printf("Visited %d\n", u);
  dfs_num[u] = VISITED; //set node to VISITED
  for (int j=0; j<(int)AdjList[u].size(); j++) {
    int v = AdjList[u][j];
    if (dfs_num[v] == UNVISITED) {
      dfs(v); //recursively visit neighbours
    }
  }
}

int main() {
  string s;
  int i=0;
  AdjList.assign(10,vector<int>());
  dfs_num.assign(10,UNVISITED);
  while (getline(cin,s)) {
    int a;
    stringstream ss(s);
    while (ss >> a) {
      AdjList[i].push_back(a);
    }
    i++;
  }
  dfs(0);
  return 0;
}
