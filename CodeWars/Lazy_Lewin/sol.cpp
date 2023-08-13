#include <bits/stdc++.h>
using namespace std;

int cost(string s) {
    int cst = 0;
    for (char c : s) {
        if (c >= 'a') {
            cst += c - 'a' + 1;
        } else {
            cst += c - 'A' + 27;
        }
    }
    return cst;
}

int32_t main(){
    int n, k;
    cin >> n >> k;
    vector<int> cst(n);
    vector<int> pre(n + 1);
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        cst[i] = cost(s);
        pre[i + 1] = pre[i] + cst[i];
    }
    int ans = 1e9;
    for (int i = k; i <= n; ++i) {
        ans = min(ans, pre[i] - pre[i - k]);
    }
    cout << ans << '\n';
    return 0;
}