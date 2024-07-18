class Solution {
public:
    bool solve(int r, int c, string word, int ind, vector<vector<char>>& board, 
    vector<vector<int>> &vis){
        if(ind==word.size()) return 1;

        int drow[] = {0,1,0,-1};
        int dcol[] = {1,0,-1,0};
        for(int i=0; i<4; i++){
            int newr = r+drow[i];
            int newc = c+dcol[i];
            if(newr>=0 && newc>=0 && newr<board.size() && newc<board[0].size() 
            && board[newr][newc]==word[ind] && !vis[newr][newc]){
                vis[r][c] = 1;
                if(solve(newr, newc, word, ind+1, board, vis)) return 1;
                vis[r][c] = 0;
            }
        }
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] == word[0]){
                    if(solve(i,j,word, 1, board, vis)) return 1;
                }
            }
        }
        return 0;
    }
};
