class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.length()!=t.length()){
        return false;
       }
       unordered_map<char,char> one;
       unordered_map<char, char> two;
       for(int i=0;i<s.length();++i){
            char x= s[i];
            char y = t[i];
            if(one.count(x)){
                if(one[x]!=y){
                    return false;
                }
            }
            else{
                    one[x]=y;
                }
            if(two.count(y)){
                if(two[y]!=x){
                    return false;
                }
            }
            else{
                    two[y]=x;
                }
       }
       return true;


        
    }
};

//TC: O(N) SC: O(min(N,K))
