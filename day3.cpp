//???
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int mod;

int prc (string&s) {
  int out=0;
  int m=s.size()-1;
  for (int i=s.size()-2;i>=0;i--) {
    out=max(out,(s[i]-'0')*10+(s[m]-'0'));
    if((s[i]>s[m])) {
      m=i;
    }
  }
  return out;
}

signed main() {
  ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    int out=0;
    while (cin>>s) {
      out+=prc(s);
    }
    cout<<out;
}