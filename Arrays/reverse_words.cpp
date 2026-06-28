class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        string y="";
        stringstream ss(s);
        string word;
        while(ss>>word){
            st.push_back(word);
        }
        for(int i=st.size()-1;i>=0;i--){
            y+=st[i];
            if(i>0){
                y+=" ";
            }
        }
        return y;

        
    }
};

//TC: O(N) SC: O(N)
