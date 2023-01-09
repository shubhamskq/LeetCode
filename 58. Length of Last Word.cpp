class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int n = s.length()-1;
        while(s[n] == ' '){
            n--;
        }
        while(n >= 0 && s[n] != ' ')
        {
            n--;
            res++;
        }
        return res;
    }
};
