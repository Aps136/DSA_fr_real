class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};
        sort(intervals.begin(),intervals.end(), [](vector<int> a, vector<int> b){
            return a[0]<b[0];
        });
        vector<vector<int>> res;
        for(auto x: intervals){
            if(res.empty()|| res.back()[1]< x[0]){
                res.push_back(x);
            }else{
                res.back()[1]= max(res.back()[1], x[1]);
            }
        }
        return res;
        
    }
};

//TC: O(NLOGN) SC: O(N)
