/*class Solution {
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
    
}
*/
class Solution {
    public int minDeletion(int[] nums) {
        List<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(num);
        }

        int count = 0;
        int i = 0;
        while (i < list.size() - 1) {
            if (list.get(i).equals(list.get(i + 1))) {
                list.remove(i);
                count++;
            } else {
                i += 2;
            }
        }

        if (list.size() % 2 != 0) {
            count++;
        }

        return count;
    }
}