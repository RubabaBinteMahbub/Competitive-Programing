#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;  // ভেক্টরের সাইজ ইনপুট

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];  // ভেক্টরের উপাদান ইনপুট
    }

    // prefix sum হিসাব
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }
  //ভেক্টর ২টা ব্যবহার করলে space complexity বাড়ে।

    // prefix sum প্রিন্ট
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
