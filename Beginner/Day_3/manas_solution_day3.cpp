class Solution {
public:
    bool isPalindrome(string S) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        if(S==" "||S=="")
        return true;
        else
        {
            string s = "";
            for(int i = 0;i<S.length();i++)
            {
                if(iswalnum(S[i]))
                s += tolower(S[i]);
            }
            int l = s.length();
            string l1;  string r;
            string L;   string R;
            if(l%2==0)
            {
                l1 = s.substr(0,(l/2));
                r = s.substr((l/2),(l/2));
            }
            else{
                l = (l-1);
                l1 = s.substr(0,(l/2));
                r = s.substr(((l/2)+1),(l/2));
            }
            L = l1; R = r;
              reverse(L.begin(),L.end());
              reverse(R.begin(),R.end());
             if(R==l1 && L==r)
             return true;
             else 
             return false;
        }
        
    }
};
