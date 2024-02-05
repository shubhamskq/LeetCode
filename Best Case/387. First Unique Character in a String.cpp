class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        vector<int> v(26, 0);
        for(char a : s)v[a - 'a']++;
        for(int i = 0 ; i < n ; i++)
        {
            if(v[s[i] - 'a'] == 1)return i;
        }
        return -1;
    }
};
