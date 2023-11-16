class Solution {
    public int maxSubArray(int[] nums) {
        int max = -10000;//index is the first index of the max sub array
        int sum = 0;//sum is the sum of max sub arrays
        for (int i = 0; i < nums.length; i++){
            sum += nums[i];
            if (max < sum) max = sum;
            if (sum <0) {
                sum = 0;
            }
        }
        return max;
    }
}