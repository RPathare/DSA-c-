class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      vector<int> row;
      vector<int> col;
      int n=matrix.size();
      int m=matrix[0].size();
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row.push_back(i);
                col.push_back(j);
            }
        }
      }

      for(int i=0;i<row.size();i++){
        int idx=row[i];
        for(int j=0;j<m;j++){
            matrix[idx][j]=0;
        }
      }

       for(int i=0;i<col.size();i++){
        int idx=col[i];
        for(int j=0;j<n;j++){
            matrix[j][idx]=0;
        }
      }


        
    
    }
};