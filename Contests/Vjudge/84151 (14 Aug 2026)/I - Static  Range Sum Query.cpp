/*Given an array of n integers, your task is to process 
q queries of the form: what is the sum of values in range 
[a,b]*/

#include<bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long
#define endl '\n'

void solve(){
ll n, q;
cin>>n>>q;

vector<ll>prefix(n+1, 0);

for(ll i=1; i<=n; i++){
   ll x;
   cin>>x;
   
   prefix[i] = prefix[i-1] + x;
}

while(q--){
   ll l, r;
   cin>>l>>r;

   // 1-based
   cout<<prefix[r] - prefix[l-1]<<endl;
}
  
}

int main(){
      FAST_IO
   
      ll t;
      t=1;
      //cin>>t;

      while(t--){
        solve();
      }

      return 0;
}
