class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxheap;
        for(int x:nums){
            maxheap.push(x);
        }
        for(int i=0;i<k-1;i++){
            if(!maxheap.empty()){
                maxheap.pop();
            }
       }
       return maxheap.top();
        
        
    }
};
//TC: o(Nlogk) SC: O(k)
