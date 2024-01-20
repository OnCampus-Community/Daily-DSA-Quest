class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // ios::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
        map<int,int> m1;
        map<int,int> m2;
        // vector<int> v;
        for(int i = 0 ;i<arr.size();i++)
        m1[arr[i]]++;

        // for(auto it:m1)
        // {
        //     if(find(v.begin(),v.end(),it.second)!=v.end())
        //     return false;
        //     v.push_back(it.second);
        // }
        // return true;

        for(auto i : m1)
        {
            m2[i.second]++;
        }
        if(m2.size()==m1.size())
        return true;
        return false;
    }
};
