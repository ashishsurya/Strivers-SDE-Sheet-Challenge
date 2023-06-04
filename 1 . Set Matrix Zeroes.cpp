class Solution {
public:
    void setZeroes(vector < vector < int >> & matrix) {
    // Write your code here.
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector < int > row(rows, -1);
    vector < int > col(cols, -1);

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (matrix[i][j] == 0) {
          row[i] = col[j] = 0;
        }
      }
    }

    //     set rows to zeroes
    for (int i = 0; i < rows; i++) {
      if (row[i] == 0) {
        for (int j = 0; j < cols; j++) {
          matrix[i][j] = 0;
        }
      }

    }

    for (int i = 0; i < cols; i++) {
      if (col[i] == 0) {
        for (int j = 0; j < rows; j++) {
          matrix[j][i] = 0;
        }
      }

    }
    
}
};
