class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> res;
        for (string x: strs){
            string y = x;
            sort(x.begin(), x.end());
            mp[x].push_back(y);
            
        }
        for(auto t: mp){
            res.push_back(t.second);
        }
        return res;
        
    }
};
//TC: O(M.NLOGN), SC: O(MN)
