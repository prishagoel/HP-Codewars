#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n, m;
   cin >> n >> m;
   vector<vector<int>> a(n, vector<int>(m));
   queue<pair<int, int>> q;
   vector<vector<int>> vis(n, vector<int>(m));
   vector<vector<int>> dist(n, vector<int>(m));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cin >> a[i][j];
         if (a[i][j]) {
            dist[i][j] = 0;
            q.push({i, j});
            vis[i][j] = 1;
         }
      }
   }

   auto check = [&](int x, int y) {
      return x >= 0 and x < n and y >= 0 and y < m and !vis[x][y];
   };

   while (!q.empty()) {
      auto X = q.front();
      int x = X.first, y = X.second;
      q.pop();
      for (int i = 0; i < 4; ++i) {
         int nx = x + dx[i], ny = y + dy[i];
         if (check(nx, ny)) {
            vis[nx][ny] = 1;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
         }
      }
   }

   int ans = 0;
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         ans += dist[i][j];
      }
   }

   cout << ans << '\n';
   return 0;
}