#include <bits/stdc++.h>
int digitcount(int n) {
  int c = 0;
  while (n > 0) {
    c++;
    n /= 10;
  }
  return c;
}
bool check(char ch) {
  int n = (int)ch;
  if (n <= 53 && n >= 49)
    return true;
  else
    return false;
}
int countSpecialNumbers(int n) {
  // Write your code here
  int l = 0;
  for (int i = 1; i <=n; i++) {
    string s = to_string(i);
    bool f = true;
    for (int j = 0; j < s.length(); j++) {
      if (check(s[j]) == false) {
        f = false;
        break;
      }
    }
    if (f == true)
      l++;
  }
  return l;
}
