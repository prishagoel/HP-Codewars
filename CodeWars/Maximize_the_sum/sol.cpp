#include <bits/stdc++.h>
using namespace std;

int main() {
   long long a[3];
   cin >> a[0] >> a[1] >> a[2];
   sort(a, a + 3);
   int k;
   cin >> k;
   while (k--) {
      a[2] *= 2;
   }
   cout << a[0] + a[1] + a[2];
}