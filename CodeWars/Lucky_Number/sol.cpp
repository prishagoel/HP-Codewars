#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   vector<int> a(n);
   for (int &i : a) {
      cin >> i;
   }
   for (int i : a) {
      string s = to_string(i);
      if (count(s.begin(), s.end(), '7')) {
         cout << i ;
         return 0;
      }
   }
   cout << "DOES NOT EXIST";
}