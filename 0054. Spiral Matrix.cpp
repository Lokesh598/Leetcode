class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int bottom = n-1;
        int left = 0;;
        int right = m-1;
        vector<int> mat;
        while(top <= bottom && left <= right) {
//            move left to right(row should be fixed)
            for(int i = left; i<=right; i++) 
                mat.push_back(matrix[top][i]);
            top++;
              
            // move top to bottom(column should be fixed)
            for(int i = top; i<=bottom; i++) 
                mat.push_back(matrix[i][right]);
            right--;
            if(top<=bottom) {
            for(int i = right; i >= left; i--) 
                mat.push_back(matrix[bottom][i]);
            bottom--;
            }
            if(left<=right) {
            for(int i = bottom; i >= top; i--) 
                mat.push_back(matrix[i][left]);
            left++;
            }
        }
        return mat;
    }
}; 
