#include <bits/stdc++.h> 
int goodnessOfString(string &s)
{
    //  Write your code here.
    int count = 0;
    int total = 0;
    int i = 0;
    while(i<s.size()){
        if(s[i] == '['){
            count++;
            i++;
        }
        else if(s[i] == ']'){
            count--;
            i++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            int temp = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                temp = (temp*10) + (s[i] - '0');
                i++;
            }
            total += temp*count;
        }
        else{
            i++;
        }
    }
    return total;
}