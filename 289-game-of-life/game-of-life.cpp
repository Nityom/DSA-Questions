class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> copy = board;

        vector<pair<int,int>> d = {
            {-1,1} , {0,1} , {1,1} , {-1,0} , {1,0} , {-1,-1} , {0,-1} , {1,-1}
        };

        for(int i =0 ; i < board.size();i++){
            for(int j = 0 ; j < board[0].size();j++){
                int count = 0;
                for(auto& x : d){
                    int ni = i + x.first;
                    int nj = j + x.second;
                    if(ni>=0 && ni < board.size() && nj >=0 && nj<board[0].size() && copy[ni][nj]==1){
                        count++;
                    }
                }

                if(copy[i][j]==1){
                    if(count < 2 || count > 3){
                        board[i][j] = 0;
                    }
                }else{
                    if(count == 3){
                        board[i][j] = 1;
                    }
                }
            }
        }
    }
};