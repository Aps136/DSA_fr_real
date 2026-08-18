if(numRows==1 || numRows>=s.length()){

            return s;

        }

        int idx=0, d=1;

        vector<vector<char>> rows(numRows);

        for(char c: s){

            rows[idx].push_back(c);

            if(idx==0){

                d=1;//move down

            }else if(idx==numRows-1){

                d=-1;//move up

            }

            idx+=d;



        }

        string res;

        for(const auto &row: rows){

            for(char c: row){

                res+=c;

            }

        }return res;


//TC:O(N) SC: O(N) 
