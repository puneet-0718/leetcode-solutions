#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int count = 0, first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count++;
                if (first == -1) first = i;
                last = i;
            }
        }

        if (count == 1) cout << 0 << endl;
        else if (count == 2) cout << 1 << endl;
        else cout << last - first << endl;
    }

}