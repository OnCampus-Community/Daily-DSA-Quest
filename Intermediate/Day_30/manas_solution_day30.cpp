class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs[0]=="")
       {
            return s;}
        int c = 1;
        for(int i = 0 ;i<strs[0].size();i++)
        {
            char ch = strs[0][i];
            for(int j = 1;j<strs.size();j++)
            {
                if(ch != strs[j][i])
                return s;
                else
                c++;
            }
            if(c==strs.size())
            s += ch;
            c = 1;
        }
        return s;
    }
};
