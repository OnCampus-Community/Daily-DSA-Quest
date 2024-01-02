int search(vector<int>& nums, int target) {
    int final = -1;
    int check = 1;
    int start = 0;
    int end = nums.size()-1;
    // Check is the number exist in the given array range
    if(target > nums[nums.size()-1]){
        final = -1;
    }
    else if(target == nums[0]){
        final = 0;
    }
    else if(target == nums[end]){
        final = end;
    }
    else{
        while(start <= end && check == 1){
            // Divide the array genrealy in two halfs and serch in mid value of the half where it could exist
            int mid = (start+end)/2;
            if(nums[mid] == target){
                final = mid;
                check = 0;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
    return final;
}