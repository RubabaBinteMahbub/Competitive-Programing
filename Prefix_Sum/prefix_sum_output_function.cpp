#include<iostream>
#include<vector>
using namespace std;
void prefix_sum(vector<int>& v) {
  vector<int> pre_sum(v.size());  
	pre_sum[0] = v[0];
  for (int i = 1;i < v.size();i++){
  pre_sum[i] = pre_sum[i - 1] + v[i];
  }
  
  for (int i = 0;i < pre_sum.size();i++){
  cout << pre_sum[i] << endl;
  }
}
int main(){
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v.push_back(x);
    }

    prefix_sum(v);
    return 0;
}
