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
  vector<string> sto;
  while (cin>>s) {
    sto.push_back(s);
  }
  int out=0;
  vector<string> trace=sto;
  for (int i=0;i<sto.size();i++) {
    for (int j=0;j<sto[i].size();j++) {
      int cc=0;
      for (int x=-1;x<=1;x++) {
        for (int y=-1;y<=1;y++) {
          if(x==0&&y==0) {

          }
          else  {
            int p=i+x;
            int q=j+y;
            if(p>=0&&p<sto.size()&&q>=0&&q<sto[i].size()) {
              if(sto[p][q]=='@') {
                cc++;
              }
            }
          }
        }
      }
      if(cc<4&&sto[i][j]=='@') {
        out++;
        trace[i][j]='X';
      }
    }
  }
  for (int i=0;i<trace.size();i++) {
    for (int j=0;j<trace[i].size();j++) {
      cout<<trace[i][j];
    }
    cout<<endl;
  }
  cout<<out<<endl;
}
