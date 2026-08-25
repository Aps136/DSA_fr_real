class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        for(auto &pair: mp){
            minheap.push({pair.second,pair.first});
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        vector<int> res;
        while(!minheap.empty()){
            res.push_back(minheap.top().second);
            minheap.pop();
        }
        return res;
        
        
        
    }
};


//TC: O(NlogK) SC:O(N)
