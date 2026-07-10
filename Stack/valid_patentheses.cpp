class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp={{')','('}, {']','['},{'}','{'}};
        for(char x: s){
            if(mp.find(x)==mp.end()){
                st.push(x);
            }else if(!st.empty() && st.top()==mp[x]){
                st.pop();
            }else{
                return false;
            }
        }
        return st.empty();
    }
};
//TC: O(N) SC: O(N)
