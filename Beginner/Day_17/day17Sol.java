class Solution {
    public int findMaxConsecutiveOnes(int[] arr) {
        int ans = 0;
        int n = arr.length;
         
          int curr = 0;
        if(arr[0]==1){
            ans++;
            curr++;
        }

        for(int i=1; i<n; i++){
            if(arr[i]==1){
                curr++;
                ans = Math.max(ans,curr);
            }else{
                curr=0;
            }
        }
        return ans;
    }
}
