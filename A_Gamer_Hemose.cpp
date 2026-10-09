
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, h;
        cin >> n >> h;

        long long a, mx1 = 0, mx2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a;

            if (a >= mx1) {
                mx2 = mx1;
                mx1 = a;
            }
            else if (a > mx2) {
                mx2 = a;
            }
        }

        long long damage = mx1 + mx2;
        long long ans = (h / damage) * 2;
        h %= damage;

        if (h > 0) {
            ans++;

            if (h > mx1) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}