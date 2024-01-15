class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hashh;
        int first = 0;
        int second = 0;
        for(int i=0; i<nums1.size(); i++){
            hashh[nums1[i]]++;
        }
        unordered_map<int,int> hashh2;
        for(int i=0; i<nums2.size(); i++){
            if(hashh[nums2[i]] > 0){
                second++;
            }
            hashh2[nums2[i]]++;
        }
        for(int i=0; i<nums1.size(); i++){
            if(hashh2[nums1[i]] > 0){
                first++;
            }
        }
        return {first, second};
    }
};