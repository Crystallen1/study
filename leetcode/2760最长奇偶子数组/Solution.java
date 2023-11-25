class Solution {
    public int longestAlternatingSubarray(int[] nums, int threshold) {
        int maxLength =0;
        int flag = 1;
        int length=0;
        for(int i=0; i<nums.length;i++) {
            if(nums[i]%2==0&&flag==1&&nums[i]<=threshold) {
                flag=0;
                length++;
            }
            else if (nums[i]%2!=0&&flag==0&&nums[i]<=threshold) {
                flag=1;
                length++;
            }
            else if(nums[i]%2==0&&nums[i]<=threshold){
                length=1;
                flag=nums[i]%2;
            }
            else{
                length=0;
                flag=1;
            }
            if (length>maxLength) {
                maxLength=length;
            }
        }
        return maxLength;
    }
}
