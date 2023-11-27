//
// Created by 71989 on 2023/11/27.
//
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {

        for(int i=0;i<mat.size();++i){
            for(int j=0;j<mat[i].size();++j){
                int newp;
                if (i % 2 == 1) {
                    newp=(j + k) %mat[i].size();
                }
                else if(i%2==0){
                    newp=((j - k % mat[i].size()+mat[i].size()))%mat[i].size();
                }
                if(mat[i][j]!=mat[i][newp]){
                    return false;
                }
            }
        }
        return true;
    }
};