#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int match(char a, char b) {
   if (a == b) return 0;
   if (a >= 'a' and b >= 'a') return 1;
   if (a >= 'a') return 2;
   if (b >= 'a') return 2;
   return 1;
}

int cost(string s, string t) {
   int ans = 0;
   if (s.length() != t.length()) return INF;
   int n = s.length();
   for (int i = 0; i < n; ++i) {
      ans += match(s[i], t[i]);
   }
   return ans;
}

int main(){
   int n;
   cin >> n;
   vector<string> s(n);
   for (int i = 0; i < n; ++i) {
      cin >> s[i];
   }
   int k;
   cin >> k;
   string t;
   cin >> t;
   int ans = INF;
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j + k - 1 < n; ++j) {
         string l = s[i].substr(j, k);
         ans = min(ans, cost(l, t));
         reverse(l.begin(), l.end());
         ans = min(ans, cost(l, t));
      }
   }
   for (int j = 0; j < n; ++j) {
      for (int i = 0; i + k - 1 < n; ++i) {
         int p = i, len = k;
         string r = "";
         while (len--) {
            r += s[p++][j];
         }
         ans = min(ans, cost(t, r));
         reverse(r.begin(), r.end());
         ans = min(ans, cost(t, r));
      }
   }
   cout << ans << '\n';
   return 0;
}