class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
      vector<int> res(26,0);
        for(char c: s) res[c - 'a']++;
        for(int i = 0 ; i < n ; i++){
            if(res[s[i] - 'a'] == 1)
                   return i;
        }
        return -1;
    }
};
