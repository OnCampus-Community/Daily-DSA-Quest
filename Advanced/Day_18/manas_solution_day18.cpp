#include <bits/stdc++.h>
vector<string> divideString(string &word, int n) {
  // Write your code here
  int l = word.length();
  if (l % n != 0)
    return {};
  else {
  vector<string> v;
  int k = l/n;
    for (int i = 0; i <= l - k; i = i + k) {
      string s = word.substr(i, k);
      v.push_back(s);
    }
    return v;
  }
}
