class Solution {
public:
    int rev(int x)
    {
        // string s = to_string(x);
        // reverse(s.begin(),s.end());
        // x = stoi(s);
        // return x;
        int r = 0;
        while(x>0)
        {
            int d = x%10;
            r = r*10 +d;
            x /= 10;
        }
        return r;

    }
    int countDistinctIntegers(vector<int>& nums) {
        // int n = nums.size();
        // for(int i = 0;i<n;i++)
        // {
        //     nums.push_back(rev(nums[i]));
        // }
        // map<int,int> m ;
        // for(int i = 0 ;i<nums.size();i++)
        // m[nums[i]]++;

        // return m.size();

        set<int> s;
        for(auto &i : nums){
            s.insert(i);
            s.insert(rev(i));
        }
        return s.size();
    }
};
