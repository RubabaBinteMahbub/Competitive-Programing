/*WA in case 5 হওয়ার কারণ ট্রাক সংখ্যা ceil এর ভ্যালু নিইনি।*/

/*  ll min_truck = n/k; এটা দেওয়াতে WA in case 5।
কারণ এখানে integer divition হচ্ছে। তাই n (number of cows) যদি k (maximum number of cows a truck can carry) দিয়ে পুরোপুরি divisible না হয় তাহলে ফ্লোট অংশটা দেখাবে না। অর্থাৎ ট্রাক সংখ্যা একটা কম দেখাবে।
n=10, c=3 হলে min_truck দেখাবে 10/3 = 3 (আসলে float এ 3.33)। কিন্তু লাগবে 4 টা ট্রাক। তাই n/k এর ceil ভ্যালুটা নিতে হবে আসল ট্রাক সংখ্যা বের করতে (ceiling division)। 

Ceiling Division করার একটি সহজ formula,
ceil(n/k) = (n+k-1)/k  

আর এটা দিলে total_cost ও double এ নিতে হবেনা। কারন ট্রাকের সংখ্যা float হতে পারেনা। আর প্রশ্নে বলেছে cost integer এই হবে। */

#include<bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long
#define endl '\n'

void LemonTea(){
        ll n, k, c;
        cin>>n>>k>>c;

        ll min_truck = (n+k-1)/k;

        ll total_cost = min_truck * c;

        cout<<min_truck<<" "<<total_cost<<endl;
}

int main(){
      FAST_IO;

      LemonTea();

      return 0;
}
