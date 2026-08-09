class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas=0;
        int tot_cost =0;
        int cur =0;
        int index =0;
        for(int i=0;i<gas.size();i++){
            tot_gas +=gas[i];
            tot_cost += cost[i];
            cur += gas[i]-cost[i];
            if(cur<0){
                index = i+1;
                cur =0;
            }
           
        }
         if(tot_gas<tot_cost){
                return -1;
            }
            return index;
        
    }
};


//TC: O(N) SC: O(1)
