class Solution {
public:
    int majorityElement(vector<int>& v) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        unordered_map<int,int> m;
        for(int i = 0;i<v.size();i++)
        m[v[i]]++;

        int max = 0; int ans = -1;
        for(auto t : m)
        {
            if(max < t.second)
            {
                ans = t.first;
                max = t.second;
            }
        }
        return ans;
    }
};
