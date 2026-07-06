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
    int mini= INT_MAX;
    TreeNode* prev = NULL;
    void dfs(TreeNode* root){
            if(root->left) dfs(root->left);
            if(prev)  mini = min(mini, abs(prev->val - root->val));
            prev = root;
            if(root->right) dfs(root->right);
        }
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return mini;       
    }
};


//TC: O(n) SC: O(h)
