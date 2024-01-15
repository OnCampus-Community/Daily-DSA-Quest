class Solution {
public:
bool check(char c)
{
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    return true;
    else
    return false;
}
    bool halvesAreAlike(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int l = s.length();
        int c1 = 0;
        int c2 = 0;
        for(int i = 0 ;i<l;i++)
        {
            if(i<l/2)
            {
                if(check(s[i]))
                c1++;
            }
            else
            {
                if(check(s[i]))
                c2++;
            }
        }
        if(c1 == c2)
        return true;
        else
        return false;
    }
};
