int search(vector<int> &nums, int target) {
    // Write your code here.
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}