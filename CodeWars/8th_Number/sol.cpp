#include <bits/stdc++.h>
using namespace std;

int factor(int x) {
   int ans = 0;
   for (int i = 1; i * i <= x; ++i) {
      if (x % i == 0) {
         ++ans;
         if (i * i != x) ++ans;
      }
   }
   return ans;
}

int main () {
   int n;
   cin >> n;
   int ans = 0;
   for (int i = 1; i <= n; i += 2) {
      if (factor(i) == 8) {
         ans++;
      }
   }
   cout << ans << '\n';
}