class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int l=0;
       int r= numbers.size()-1;
       vector<int> res;
       while(l<r){
            int x = numbers[l]+numbers[r];
            if( x== target){
                res.push_back(l+1);
                res.push_back(r+1);
                return res;
            }
            else if(x<target){
                l++;
            }
            else if(x>target){
                r--;
            }

       }
       return res;      

    }  
        
        
    
};


//TC: O(N) SC: O(1)
