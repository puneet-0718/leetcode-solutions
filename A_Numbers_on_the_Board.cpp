#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++) {
        int l, r;
        cin >> l >> r;

        vector<int> a;

        for (int i = l; i <= r; i++) {
            a.push_back(i);
        }

        int sum = 0;
        int neg = 0, pos = 0;

        for (int i = 0; i < a.size(); i++) {
            sum += a[i];

            if (a[i] < 0) {
                neg++;
            }
            else if (a[i] > 0) {
                pos++;
            }
        }

        int ans;

        if (sum >= l && sum <= r) {
            ans = 0;
        }
        else if (l <= 0 && r >= 0) {
            int pairs = min(neg, pos);
            int keep = 2 + (2 * pairs);

            ans = a.size() - keep;
        }
        else {
            ans = a.size() - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}