//???
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ll out=0;

ll tonum (string x) {
  ll hs=1;
  ll q=0;
  for (ll i=x.size()-1;i>=0;i--) {
    q+=hs*(x[i]-'0');
    hs*=10;
  }
  return q;
}

ll comp(string a,string b) {
  if(a.size()>b.size()) {
    return 2;
  }
  else if(a.size()<b.size()) {
    return 0;
  }
  for (ll i=0;i<a.size();i++) {
    if(a[i]>b[i]) {
      return 2;
    }
    else if(a[i]<b[i]) {
      return 0;
    }
  }
  return 1;
}

void xl(string&temp) {
  cout<<temp<<" : "<<endl;
  string a="";
  string b="";
  ll isok=false;
  for (ll i=0;i<temp.size();i++) {
    if(temp[i]=='-') {
      isok=true;
    }
    else if(isok) {
      b+=temp[i];
    }
    else {
      a+=temp[i];
    }
  }
  //cout<<a<<" "<<b<<endl;
  temp="";
  if(a.size()>b.size()) {
    return;
  }
  ll aa=a.size();
  ll bb=b.size();
  ll hs=1;
  
  for (ll i=aa;i<=bb;i++) {
    if(i%2==0) {
      ll x=1;
      for (ll j=1;j<(i/2);j++) {
        x*=10;
      } 
      for (ll k=x;k<(x*10);k++) {
         string s=to_string(k);
         s+=to_string(k);
         //cout<<s<<" "<<a<<" "<<b<<" "<<comp(s,a)<<" "<<comp(s,b)<<endl;
         if(comp(s,a)>0&&comp(s,b)<2) {
          //cout<<"run"<<endl;
          cout<<s<<endl;
          out+=tonum(s);
         }
      }
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  string s;
  cin>>s;
  //cout<<s<<endl;
  //ll out=0;
  string temp="";
  for (ll i=0;i<=s.size();i++) {
    if(i==s.size()) {
      xl(temp);
    }
    else if(s[i]==',') {
      xl(temp);
    }
    else {
      temp+=s[i];
    }
  }
  cout<<out;
}