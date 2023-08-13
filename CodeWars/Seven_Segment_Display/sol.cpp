#include <bits/stdc++.h>
using namespace std;

int32_t main(){
   int n;
   cin >> n;

   cout << "THE MAXIMUM NUMBER FORMED IS ";
   if (n & 1) {
      cout << 7;
      for (int i = 0; i < n - 3; i += 2) {
         cout << 1;
      }
      cout << '\n';
   } else {
      for (int i = 0; i < n; i += 2) {
         cout << 1;
      }
      cout << '\n';
   }

   cout << "THE MINIMUM NUMBER FORMED IS ";
   string res = "";
   while (n >= 6) {
      res += "0";
      n -= 6;
   }

   if (n == 1) {
      res.pop_back();
      res += '8';
   } else if (n == 2) {
      res += '1';
   } else if (n == 3) {
      res += '7';
   } else if (n == 4) {
      res += '4';
   } else if (n == 5) {
      res += '2';
   }

   cout << res << '\n';
   return 0;
}