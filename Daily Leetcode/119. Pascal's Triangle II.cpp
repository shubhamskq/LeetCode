class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(1, 1);
        for(int i = 0 ; i < rowIndex ; i++){
            vector<int> row;
            row.push_back(1);
            for(int j = 1 ; j < res.size() ; j++)
            {
                row.push_back(res[j-1] + res[j]);
            }
            row.push_back(1);
            res = row;
        }
        return res;
    }
};
