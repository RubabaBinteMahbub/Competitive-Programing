#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // array size

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];  // array input
    }

    // prefix sum হিসাব
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }

    int q;  // number of queries
    cin >> q;

    while (q--) {
        int l, r;  // range: l থেকে r (0-indexed)
        cin >> l >> r;

        int sum;
        if (l == 0) {
            sum = v[r];
        } else {
            sum = v[r] - v[l - 1];
        }
  //sum = v[r] - (l > 0 ? v[l-1] : 0);

        cout << sum << endl;
    }

    return 0;
}
