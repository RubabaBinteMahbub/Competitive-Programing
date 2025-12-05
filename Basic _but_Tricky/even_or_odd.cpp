#include<iostream>
#include<string>
using namespace std;
int main(){
long long t,x;
cin>>t;
while(t--){
string s;
cin>>s;
char last_digit=s.back(); //শেষ ক্যারেক্টার।
if(last_digit=='0' || last_digit=='2' ||last_digit=='4' || last_digit=='6' ||last_digit=='8') cout<<"even"<<endl;
else cout<<"odd"<<endl;
}
return 0;
}
