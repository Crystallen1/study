//
// Created by 71989 on 2023/11/24.
//
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        count=0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j <nums.size() ; ++j) {
                if(nums[i]+nums[j]<target)count++;
            }
        }
        return count;
    }
};