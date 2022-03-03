class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row = matrix.size(),col = matrix[0].size();
        
        for(int i=0;i<row;i++){
            set<int> x;
            for(int j=0;j<col;j++){
                x.insert(matrix[i][j]);
            }
            if(x.size()!=row) return false;
        }
        
        for(int i=0;i<col;i++){
            set<int> x;
            for(int j=0;j<row;j++){
                x.insert(matrix[j][i]);
            }
            if(x.size()!=row) return false;
        }
        
        return true;
    }
};