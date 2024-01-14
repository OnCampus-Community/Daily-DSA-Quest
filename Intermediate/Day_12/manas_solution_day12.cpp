#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b, c;
    cin >> a >> b >> c;
    int n = a.size();
    int m = b.size();
    int k = c.size();
    if(n!=m || m!=k || k != n)
    {
      cout<<"NO\n";
    }
    else
    {
      bool f = true;
      for(int i = 0 ;i<n;i++)
        {
          if(c[i] != a[i] && c[i] != b[i])
          {
            cout<<"NO\n";
            f = false;
            break;
          }
        }
     if(f == true) cout<<"YES\n";
    }
  }
  return 0;
}
