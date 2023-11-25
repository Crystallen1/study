class Solution {
    public static int calculateMinDifferenceSum(int[] array) {
        int minElement = findMin(array);
        int sumOfDifferences = 0;

        // 计算差值之和
        for (int value : array) {
            sumOfDifferences += Math.abs(value - minElement);
        }

        // 减去最小元素与自身的差值（总是0）
        sumOfDifferences -= Math.abs(minElement - minElement);

        return sumOfDifferences;
    }

    private static int findMin(int[] array) {
        int min = array[0];
        for (int value : array) {
            if (value < min) {
                min = value;
            }
        }
        return min;
    }
    public int minMoves(int[] nums) {

        return calculateMinDifferenceSum(nums);
    }
}