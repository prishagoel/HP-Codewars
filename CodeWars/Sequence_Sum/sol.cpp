#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int ans = 0;
   for (int i = 1; i <= n; ++i) {
      if (i % 5 == 0 and i % 3 == 0) {
         ans += 0;
      } else if (i % 3 == 0) {
         ans += 3;
      } else if (i % 5 == 0) {
         ans += 5;
      } else{
         ans += i;
      }
   }
   cout << ans << '\n';
}