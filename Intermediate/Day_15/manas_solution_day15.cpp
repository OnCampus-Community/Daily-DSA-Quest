class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v ;
        int l1 = nums1.size(); //length of nums1 array
        int l2 = nums2.size();  //length of nums2 array
        int n1 = 0;
        int n2 = 0;

        map<int,int> m1;
        map<int,int> m2;
        for(int i = 0;i<l1;i++)
        m1[nums1[i]]++;
        for(int i = 0;i<l2;i++)
        m2[nums2[i]]++;

    for(int i = 0;i<l1;i++)
        if(m2.find(nums1[i]) != m2.end())  n1++;

    for(int i = 0;i<l2;i++)
        if(m1.find(nums2[i]) != m1.end())  n2++;

    v.push_back(n1);
    v.push_back(n2);
    return v;
    }
};
