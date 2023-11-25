//
// Created by 71989 on 2023/11/25.
//
/**
 * Definition for a binary tree node.
 *  struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int canFormPalindrome(int count[]) {
    int oddCount = 0;
    // 检查有多少个元素的出现次数为奇数
    for (int i = 1; i <= 9; ++i) {
        if (count[i] % 2 != 0) {
            oddCount++;
            if (oddCount > 1) {
                return false;
            }
        }
    }
    return true;
}
    int dfs(TreeNode* root, int count[]){
        int result=0;
        if(root==nullptr) return 0;
        count[root->val]+=1;
        if(root->left==nullptr &&root->right==nullptr ){
            if(canFormPalindrome(count))result=1;
            else result=0;
        }
        else{
            result=dfs(root->left,count)+dfs(root->right,count);
        }
        count[root->val]-=1;
        return result;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        int count[10]; 
        memset(count, 0, sizeof(count));
        return dfs(root,count);

    }
};