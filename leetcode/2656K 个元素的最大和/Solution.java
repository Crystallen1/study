class Solution {
    public int maximizeSum(int[] nums, int k) {
        int sum = 0;
        int max=0;
        for(int j =0; j<nums.length; j++){
            if(nums[j]>max){
                max=nums[j];
            }
        }
        sum=(max+max+k-1)*k/2;
        return sum;
    }
}