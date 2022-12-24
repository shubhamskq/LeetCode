class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int res = 0;
        
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(i != 0 && mp[s[i-1]] < mp[s[i]])
            {
                res += mp[s[i]] - mp[s[i-1]];
                i--;
                continue;
            }
            res +=  mp[s[i]];
        }
        return res;
    }
};
