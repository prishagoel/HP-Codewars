#include <bits/stdc++.h>
using namespace std;

int main() {
   int f, p;
   cin >> f >>  p;
   if (f == p) {
      cout << "Draw";
      return 0;
   }
   if (f == 1) {
      cout << "Ferb";
   } else if (p == 1) {
      cout << "Phineas";
   } else {
      if (f < p) {
         cout << "Phineas";
      } else {
         cout << "Ferb";
      }
   }
}