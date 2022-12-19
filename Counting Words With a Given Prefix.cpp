class Solution {
     bool check(string &s, string &p){
          if(s.length() < p.length())
                 return false;
          for(int i = 0 ; i < p.length() ; i++){
              if(s[i] != p[i])
                  return false;
          }
          return true;
     }
public:
    int prefixCount(vector<string>& words, string pref) {
         int n = words.size();
         int res = 0;
             for(int i = 0 ; i < n ; i++){
                 if(check(words[i], pref))
                           res++;
             }
        return res;
    }
};
