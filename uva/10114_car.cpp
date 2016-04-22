#include <bits/stdc++.h>

using namespace std;

map<int,float> deps;

int main() {
  int months, dep;
  double dp, loan;
  while(scanf("%d %lf %lf %d", &months, &dp, &loan, &dep) && months >= 0) {
    while (dep--) {
      int a;
      double b;
      scanf("%d %lf", &a, &b);
      deps[a] = b;
    }
    
    int month = 0;
    double paid = 0;
    double currdep = deps[0];
    double amtpermonth = loan/months;
    double val = loan+dp;
    val *= (1-currdep);

    while (true) {      
      if (loan - paid < val) {
        printf("%d %s\n", month, month == 1 ? "month" : "months");
        deps.clear();
        break; 
      }

      month++;

      if (deps.count(month) == 1) {
        currdep = deps[month];
      }

      val *= (1-currdep);
      paid += amtpermonth;
    }
  } 
  return 0;
}
