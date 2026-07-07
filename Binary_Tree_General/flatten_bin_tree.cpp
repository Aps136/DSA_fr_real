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
    void flatten(TreeNode* root) {
        TreeNode* current = root;
        while(current!=nullptr){
            if(current->left !=nullptr){
                TreeNode* pred= current->left;
                while(pred->right!=nullptr){
                    pred=pred->right;
                }
                pred->right = current->right;
                current->right = current->left;
                current->left = nullptr;
            }
            current= current->right;
        }
        
    }
};

//TC: O(1) SC: O(N)
