class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool boxes[9][9]={false};
        for(int r=0;r<9;++r){
            for(int c=0;c<9;++c){
                char val = board[r][c];
                if(val=='.') continue;
                int num = val-'1';
                int boxidx = (r/3)*3 + (c/3);
                if(rows[r][num] || cols[c][num] || boxes[boxidx][num]){
                    return false;
                }
                rows[r][num]=true;
                cols[c][num]=true;
                boxes[boxidx][num]=true;
            }
        }
        return true;
        
    }
};

//TC: O(1) SC: O(1)
