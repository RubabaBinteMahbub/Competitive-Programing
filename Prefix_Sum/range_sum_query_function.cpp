#include<iostream>
#include<vector>
using namespace std;

vector<int> prefix_sum(vector<int>& v) {
    vector<int> pre_sum(v.size());
    pre_sum[0] = v[0];
    for (int i = 1; i < v.size(); i++) {
        pre_sum[i] = pre_sum[i - 1] + v[i];
    }
    return pre_sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> res = prefix_sum(v);

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;  // ধরে নিচ্ছি 0-indexed

        int sum;
        if (l == 0)
            sum = res[r];
        else
            sum = res[r] - res[l - 1];

        cout << sum << "\n";
    }

    return 0;
}
