#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   int even = n / 2;
   int odd = n - even;
   cout << odd * even;
}