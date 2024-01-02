class Solution {
public:
    int majorityElement(vector<int>& v) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        sort(v.begin(),v.end());
        int Max = 0;
        int c = 1; int index = 0;
        for(int i = 0;i<(v.size()-1);i++)
        {
            if(v[i] != v[i+1])
            {
                if(Max < c)
                {
                    index = i;
                Max = max(Max,c);
                }
                c = 1;
            }
            else
            {
                c++;
                if(i == (v.size()-2))
                {
                    if(Max < c)
                    {
                       index = i;
                       Max = max(Max,c);
                    }
                }
            }
        }
        return v[index];
    }
};
