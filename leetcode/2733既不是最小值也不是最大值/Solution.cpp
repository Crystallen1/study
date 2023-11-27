class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2)return -1;
        int minnum=min(nums[0],nums[1]);
        int maxnum=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();++i){
            if(minnum>=nums[i]){return minnum;}
            if(maxnum<=nums[i]){return maxnum;}
            return nums[i];
        }
        return -1;
    }
};