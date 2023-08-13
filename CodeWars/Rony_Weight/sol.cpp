#include <bits/stdc++.h>
using namespace std;

int main() {
   int sum[10];
   for (int i = 0; i < 10; ++i) {
      cin >> sum[i];
   }
   sort(sum, sum + 10);
   long long tot = 0;
   for (int i = 0; i < 10; ++i) {
      tot += sum[i];
   }
   tot /= 4;
   int wt[5];
   wt[2] = tot - sum[0] - sum[9];
   wt[4] = sum[8] - wt[2];
   wt[0] = sum[1] - wt[2];
   wt[1] = sum[0] - wt[0];
   wt[3] = sum[9] - wt[4];
   for (int i = 0; i < 5; ++i) {
      cout << wt[i] << ' ';
   }
   cout << '\n';
}