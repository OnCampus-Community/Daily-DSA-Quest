class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char> ch;
        for(int i = 0;i<s.length();i++)
        {
            if(find(ch.begin(),ch.end(),s[i]) != ch.end())
            {
                return s[i];
                ch.clear();
            }
            else
            {
                ch.push_back(s[i]);
            }
        }
        return 'na';
    }
};
