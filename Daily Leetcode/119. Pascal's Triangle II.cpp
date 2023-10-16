// Brute Force Solution
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

// Best Case
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(1,1);
        long long prev = 1;
        long long next;
        for(int i = 1 ; i <= rowIndex ; i++)
        {
            next = prev * (rowIndex - i + 1)/i;
            res.push_back(next);
            prev = next;
        }
        return res;
    }
};
