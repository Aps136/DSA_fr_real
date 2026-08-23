class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(int x: nums2){
            while(!st.empty() && x>st.top()){
                mp[st.top()]=x;
                st.pop();
            }
            st.push(x);
                    
        }
        while(!st.empty()){
                mp[st.top()]=-1;
                st.pop();

            }   
        vector<int>res;
            for(int y: nums1){
                res.push_back(mp[y]);
            }
        return res;
    }
};

//TC: O(N+M) SC: O(M) 
