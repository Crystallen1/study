//
// Created by 71989 on 2023/11/27.
//
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        bool hasswap=true;
        while (hasswap){
            hasswap=false;
            for(int i=0;i<nums.size()-1;++i){
                for(int j=i+1;j<nums.size();++j){
                    if(nums[i]>nums[j]&&abs(nums[i]-nums[j])<=limit){
                        swap(nums[i],nums[j]);
                        hasswap=true;
                    }
                }
            }
        }
        return nums;
    }
};