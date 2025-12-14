//???
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int mod;

signed main() {
  ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  string s;
  int nowpos=50;
  int out=0;
  while (cin>>s) {
    char c=s[0];
    int cc=0;
    int hs=1;
    for (int i=s.size()-1;i>0;i--) {
      cc+=hs*(s[i]-'0');
      hs*=10;
    }
    //out+=cc/100;
    cc%=100;
    //cout<<cc<<endl;
    if(c=='L') {
      int tmp=nowpos;
      nowpos = (nowpos-cc+100)%100;
      if(nowpos==0) {
        out++;
        //cout<<tmp<<" "<<nowpos<<endl;
      }
    }
    else {
      int tmp=nowpos;
      nowpos = (nowpos+cc)%100;
      //cout<<tmp<<" "<<nowpos<<endl;
      if(nowpos==0) {
        out++;
        //cout<<tmp<<" "<<nowpos<<endl;
      }
    }
  }
  cout<<out;
}