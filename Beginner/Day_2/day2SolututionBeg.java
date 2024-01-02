public class Solution {

    public static int search(int []nums, int target) {
        int start=0;
        int last=nums.length-1;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(nums[mid]==target){

                return mid;
            }
            else if(nums[mid]>target){
                last=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
        }
        return -1;//shows that element is not present.
    }

}
