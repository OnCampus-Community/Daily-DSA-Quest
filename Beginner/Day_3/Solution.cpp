class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        char temp;
        bool check = 1;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                temp = s[i]+32;
                str.append(1, temp);
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                temp = s[i];
                str.append(1, temp);
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                temp = s[i];
                str.append(1, temp);
            }
        }

        for(int i=0; i<str.size()/2; i++){
            if(str[i] != str[str.size()-i-1] && i <= (str.size()-i-1)){
                check = 0;
            }
        }
        return check;
    }
};