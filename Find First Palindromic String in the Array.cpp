class Solution {
public:
    bool check(string s)
    {
        int l = 0 , h = s.size() - 1;
        while(l < h)
        {
            if(s[l++] != s[h--])
                   return false;
         }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int i;
        for(i = 0 ; i < words.size() ; i++)
        {
            if(check(words[i]))
                  return words[i];
        }
        return "";
    }
};
