class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> p;
        int ans;
        int m = matrix.size();
        int n = matrix[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minheap;
        for(int r=0;r<min(m,k);r++){
            minheap.push({matrix[r][0], r,0});

        }
        for(int i=1;i<=k;i++){
            auto top = minheap.top();
            minheap.pop();
            int r = top[1], c=top[2];
            ans = top[0];
            if(c+1<n){
                minheap.push({matrix[r][c+1],r,c+1});

            }
           
        }
         return ans;

        
    }
};


//TC: O(KLOGK) SC:  O(N)
