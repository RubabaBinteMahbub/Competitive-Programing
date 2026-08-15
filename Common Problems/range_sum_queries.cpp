void range_sum_queries(){
ll n, q;
cin>>n>>q;

//for 1-based index (এর সাইজ ১ ঘর বেশি নিলাম।)
// আসলে ২ কেসই handle করার জন্য।
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

   // 0-based (l=0 এর কেস আলাদাভাবে হ্যান্ডেল করা লাগবেনা।)
   // cout<<prefix[r+1] - prefix[l]<<endl;
}
}


// Prefix → 0 based
// Given array → 0/1 based

/* 0-based index : prefix[r + 1] - prefix[l]
Index:   0   1   2   3   4
               ↓   ↓   ↓   ↓   ↓
Array:   [3,  2,  4,  5,  1]

prefix:
index    0   1   2   3   4   5
              ↓   ↓    ↓   ↓   ↓   ↓
value    0   3   5   9  14 15

query : [1, 3]

index:   0   1   2   3   4
array:    3   2   4   5   1
                  └───┘
                   2 + 4 + 5 = 11

prefix[3 + 1] - prefix[1]
= prefix[4] - prefix[1]
= 14 - 3
= 11

query : [0, 2]

3 + 2 + 4 = 9

prefix[2 + 1] - prefix[0]
= prefix[3] - prefix[0]
= 9 - 0
= 9 */
