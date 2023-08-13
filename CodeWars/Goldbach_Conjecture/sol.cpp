#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
   if (x <= 1) return false;
   for (int i = 2; i * i <= x; ++i) {
      if (x % i == 0) return false;
   }
   return true;
}

int main() {
   int n;
   cin >> n;
   int a, b;
   for (int i = 2; i <= n; ++i) {
      if (is_prime(i)) {
         if (is_prime(n - i)) {
            if (i <= n - i) {
               a = i;
               b = n - i;
            }
         }
      }
   }
   cout << a << ' ' << b << '\n';
}