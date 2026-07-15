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
    int count=0;
    int res;
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;       
        helper(root, k);
        return res;
          
    }
private:
    void helper(TreeNode* root, int k){
        if(root==nullptr){
            return;
        }
        helper(root->left, k);
        count++;
        if(count==k){
            res = root->val;
            return;
        }
        helper(root->right, k);

    }

};

=+
//TC: O(H+k) SC: O(H)
