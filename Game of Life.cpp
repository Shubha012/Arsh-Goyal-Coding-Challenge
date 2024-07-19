class Solution {
public:
    int totalNeigh(int r, int c, vector<vector<int>>& board){
        int dr[] = {-1, -1, -1, 0, 1, 1, 1, 0};
        int dc[] = {-1, 0, 1, 1, 1, 0, -1, -1};
        int n =0;
        for(int i=0; i<8; i++){
            int nrow = r + dr[i];
            int ncol = c + dc[i];
            if(nrow>=0 && ncol>=0 && nrow<board.size() && ncol<board[0].size() &&
            abs(board[nrow][ncol])==1) n++;
        }
        return n;
    }

    void gameOfLife(vector<vector<int>>& board) {
        // int n = board.size();
        // int m = board[0].size();
        // vector<vector<int>> v(board.begin(), board.end());
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         if(board[i][j]==0){
        //             int neigh = totalNeigh(i, j, board);
        //             if(neigh==3) v[i][j] = 1;
        //         }
        //         else{
        //             int neigh = totalNeigh(i, j, board);
        //             if(neigh>3 || neigh<2) v[i][j] = 0;
        //         }
        //     }
        // }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m;j++){
        //         board[i][j] = v[i][j];
        //     }
        // }

        // optimal
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int neighbours = totalNeigh(i, j, board);
                
                if(board[i][j]==0 && (neighbours==3)) board[i][j] = 2;

                if(board[i][j]==1 && (neighbours<2 || neighbours>3)) board[i][j] = -1;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]==-1) board[i][j] = 0;
                if(board[i][j]==2) board[i][j] = 1;
            }
        }
    }
};
