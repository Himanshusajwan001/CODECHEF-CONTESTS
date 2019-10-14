#include <iostream>
using namespace std;
#define max(a, b) (a > b? a : b);
#define min(a, b) (a <= b? a : b);

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
        bool flag = true;
	    int cat[n + 1] = {0}, can[m] = {0};
        for (int i = 0; i < m; ++i) cin >> can[i];

        for (int i = 0; i < m; ++i) {
            ++cat[can[i]];
            int mx = 0, mn = INT32_MAX;
            for (int i = 1; i <= n; ++i) {
                mn = min(mn, cat[i]);
                mx = max(mx, cat[i]);
            }
            if (mx - mn > 1) {
                flag = false;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
	}
	return 0;
}
