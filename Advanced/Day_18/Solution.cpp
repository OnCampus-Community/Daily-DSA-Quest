#include <bits/stdc++.h> 
vector<string> divideString(string &word, int n) {
  // Write your code here
  vector<string> res;
  if(word.size()%n != 0){
    return res;
  }
  int i=0;
  while(i<word.size()){
    string temp = "";
    int x = word.size()/n;
    while(x--){
      temp += word[i];
      i++;
    }
    res.push_back(temp);
  }
  return res;
}