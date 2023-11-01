class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxsize=0;
        int v=0;
        for(int i=0,j=height.size()-1;i<j;){
            if(height[i]>height[j]){
                v=(j-i)*height[j];
            }
            else{
                v=(j-i)*height[i];
            }
            if(v>maxsize)maxsize=v;
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxsize;
    }
};