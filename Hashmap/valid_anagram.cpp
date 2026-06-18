class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!= t.size()){
            return false;
        }
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int j=0;j<26;j++){
            if(count[j]!=0)return false;
        }
        return true;
    }
};

//TC: O(N), SC: O(1)
