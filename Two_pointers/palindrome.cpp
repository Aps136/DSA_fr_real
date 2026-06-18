class Solution {
public:
    bool isPalindrome(string s) {
      
      string neww="";
      for(char t: s){        
            if(isalnum(t)){
            neww+=tolower(t);       
        }        
      }
      int l=0;
      int r=neww.size()-1;
      while(l<r){
        if(neww[l]!=neww[r]){
            return false;
        }
        l++;
        r--;
      }
      return true;
    }

};

//TC: O(N), SC: O(1)
