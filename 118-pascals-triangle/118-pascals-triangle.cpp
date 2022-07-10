class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri = {{1}};
        for (int i = 1; i < numRows; i++){
            vector<int> row (i+1, 0);
            for (int j = 0; j<row.size(); j++){
                if (j==0 || j==row.size()-1) row[j] = 1;
                else if (j>0 && j<tri[i-1].size()){
                    row[j] = tri[i-1][j-1] + tri[i-1][j];
                }
            }
            tri.push_back(row);
        }
        return tri;
    }   
};