class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        vector<string> words;
        stringstream ss(s);
        string   word;
        while(ss>> word){
            words.push_back(word);

        }
        if(pattern.size()!=words.size()){
            return false;
        }
        unordered_map<char,string> chartoword;
        unordered_map<string,char> wordtochar;
        for(int i=0;i<pattern.size();++i){
            char c = pattern[i];
            string w = words[i];
            if(chartoword.count(c)){
                if(chartoword[c]!=w){
                    return false;
                }
            }else{
                    chartoword[c]=w;
                }
            if(wordtochar.count(w)){
                if(wordtochar[w]!=c){
                    return false;
                }
            }else{
                    wordtochar[w]=c;
                }
        }
        return true;
        

       
        
        
    }
};
//TC : O(M), SC:O(N)


