#include <bits/stdc++.h>
using namespace std;

int main() {
   int x;
   cin >> x;
   vector<int> trib = {0, 0, 1};
   if (x <= 1) {
      cout << "YES";
      return 0;
   }
   while (trib.back() < x) {
      int sz = trib.size();
      trib.push_back(trib[sz - 1] + trib[sz - 2] + trib[sz - 3]);
   }

   if (trib.back() == x) {
      cout << "YES";
   } else {
      cout << "NO";
   }
}