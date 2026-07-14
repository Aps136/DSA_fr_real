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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        bool flag=true;
        if(root==nullptr){return res;}
        while(!q.empty()){
            
            int s = q.size();
            vector<int> cur(s);
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                int index = (flag) ? i: (s-i-1);
                cur[index] = node->val;
                if(node->left){
                         q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }     
                
            }         
            flag=!flag;
            res.push_back(cur);    
            
                 
        }
        return res;
        
        
    }
};

//TC: O(N) SC: O(N) 
