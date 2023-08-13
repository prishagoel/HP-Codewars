#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int is_prime[N];

int main() {
   fill(is_prime, is_prime + N, 1);
   is_prime[0] = is_prime[1] = 0;
   for (int i = 2; i < N; ++i) {
      if (is_prime[i]) {
         for (int64_t j = i * 1LL * i; j < N; j += i) {
            is_prime[j] = 0;
         }
      }
   }
   int n;
   cin >> n;
   vector<int> a(n + 1);
   for (int i = 1; i <= n; ++i) {
      cin >> a[i];
   }

   vector<int> can(n + 1);
   vector<int> max_can(n + 1);

   can[0] = 1;
   for (int i = 1; i <= n; ++i) {
      int sum = 0;
      for (int j = i; j > 0; --j) {
         sum += a[j];
         if (can[j - 1] and is_prime[sum]) {
            can[i] = 1;
            max_can[i] = max(max_can[i], max_can[j - 1] + 1);
         }
      }
   }

   if (can[n]) {
      cout << "HAPPY\n";
      cout << max_can[n] << '\n';
   } else {
      cout << "UNHAPPY\n";
   }
}