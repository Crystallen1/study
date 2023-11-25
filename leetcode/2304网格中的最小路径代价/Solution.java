class Solution {
    public int minPathCost(int[][] grid, int[][] moveCost) {
        int sum = grid.length*grid[0].length;
        int [] cost = new int[sum];
        for (int j =0;j<grid[0].length;j++){
            cost[grid[0][j]] = grid[0][j];
        }
        int mincost=99999;
        for(int i =1;i<grid.length;i++){
            for(int j =0;j<grid[i].length;j++){
                mincost=99999;
                for(int k =0;k<grid[i-1].length;k++){
                    if (moveCost[grid[i-1][k]][j]+cost[grid[i-1][k]]<mincost) {
                        mincost=moveCost[grid[i-1][k]][j]+cost[grid[i-1][k]];
                    }
                }
                cost[grid[i][j]]=mincost+grid[i][j];
            }
        }
        int result=999999;
        for(int i=0;i<grid[0].length;i++){
            result = Math.min(result,cost[grid[grid.length-1][i]]);
        }
        return result;
    }
}