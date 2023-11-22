 11/22
 再其实也根本不需要删除元素。
 因为我们只需要偶数位置上的元素与后一个不相等，因此可以把完美数组看成一个个不相等的元素对。因此我们只需要找到原数组中这样元素对的个数。剩余的元素就是我们要删除的元素
 11/21
 其实不必在意nums.length 为偶数这个限制，因为如果满足对所有满足 i % 2 == 0 的下标 i ，nums[i] != nums[i + 1] 均成立，但长度为奇数，只需要将最后一位删除，就能满足美丽数组的要求了。
 所以就只用让数组满足对所有满足 i % 2 == 0 的下标 i ，nums[i] != nums[i + 1] 均成立。就可以了。
 
 我的思路，正确但是会超时
 ``` class Solution {
    public int isBeautiful(int[] nums) {
            for (int i=0; i<nums.length-1; i+=2) {
                if (nums[i]==nums[i+1]) {
                    return i;
                }
            }
        
        return -1;
    }
    public static int[] removeElement(int[] arr, int index) {
        // 如果索引无效，则返回原始数组
        if (index < 0 || index >= arr.length) {
            return arr;
        }
    
        // 创建一个新数组，长度比原数组少1
        int[] newArr = new int[arr.length - 1];
    
        // 复制要删除元素之前的元素
        for (int i = 0; i < index; i++) {
            newArr[i] = arr[i];
        }
    
        // 跳过要删除的元素，复制剩下的元素
        for (int i = index + 1; i < arr.length; i++) {
            newArr[i - 1] = arr[i];
        }
    
        return newArr;
    }
    
    public int minDeletion(int[] nums) {
        int count = 0;
        while (nums.length > 0) {
            int index = isBeautiful(nums);
            if (index == -1) {
                if (nums.length % 2 == 0) {
                    return count; // 数组已经是美丽数组
                } else {
                    count++;
                    nums = removeElement(nums, nums.length - 1); // 删除最后一个元素
                }
            } else {
                count++;
                nums = removeElement(nums, index); // 删除不满足条件的元素
            }
        }
        return count;
    }
    
} ```
