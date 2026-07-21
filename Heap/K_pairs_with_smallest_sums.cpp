class Solution {
public:
    typedef pair<int, pair<int,int>> P;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<P,vector<P>, greater<P>> pq;
        int m = nums1.size();
        int n = nums2.size();
        set<pair<int,int>> visited;
        int sum = nums1[0]+ nums2[0];
        pq.push({sum, {0,0}});
        visited.insert({0,0});
        vector<vector<int>> res;
        while(k-- && !pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int i = temp.second.first;
            int j = temp.second.second;
            res.push_back({nums1[i],nums2[j]});
            if(j+1<n && visited.find({i,j+1})==visited.end()){
                pq.push({nums1[i]+nums2[j+1], {i,j+1}});
                visited.insert({i,j+1});
            }
            if(i+1<m && visited.find({i+1,j})==visited.end()){
                pq.push({nums1[i+1]+nums2[j], {i+1,j}});
                visited.insert({i+1,j});
            }           
        }
        return res;
        

        
    }
};

// TC: O(Klog(min(M,N)) where K is the number of pairs requested and M, N are the indv sizes of vectors
//SC: min(M,K)
