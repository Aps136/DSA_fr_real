class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string word;
        while(getline(ss,word,'/')){
           if(word=="" || word=="."){
             continue;
           }
           if(word==".."){
            if(!st.empty()){
                st.pop();
            }
           }else{
            st.push(word);
           }

        }
        string res="";
        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }
        return res.empty()?"/":res;
        
    }
};

//TC: O(N) SC:O(N) 


