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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;        
        vector<double> avg;
        if(root==nullptr) return avg;       
        q.push(root);        
        while(!q.empty()){            
          int levelsize = q.size();
          double  levelsum =0;
            for(int i=0;i<levelsize;i++){
                TreeNode* currnode = q.front();
                q.pop();
               levelsum +=currnode-> val;
                if(currnode->left!=nullptr){
                    q.push(currnode->left);
                }
                if(currnode->right!=nullptr){
                    q.push(currnode->right);
                }

            }
            avg.push_back(levelsum/ levelsize);

        }
return avg;
        
        
    }
};


//TC: O(N) SC: O(W) where w is width
