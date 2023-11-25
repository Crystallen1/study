class Solution {
    public int integerBreak(int n) {
        int sum = 0;
        int yushu = n%3;
        if (n==2) {
            return 1;
        }
        if (n==3) {
            return 2;
        }
        if (yushu == 0) {
            sum = (int) Math.pow(3, n/3);
        }else if (yushu == 1) {
            sum = (int) Math.pow(3, n/3-1)*4;
        }else if (yushu == 2) {
            sum = (int) Math.pow(3, n/3)*2;
        }

        return sum;
    }
}