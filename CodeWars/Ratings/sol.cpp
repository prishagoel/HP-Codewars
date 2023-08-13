#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   vector<int> cnt(5);
   for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      cnt[x - 1]++;
   }
   for (int i = 0; i < 5; ++i) {
      cout << cnt[i] << " user rated the product as " << i + 1 << '\n';
   }
}