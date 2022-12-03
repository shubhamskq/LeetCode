class Solution {
public:
    string generateTheString(int n) {
        if(n == 1) return "a";
        if(n == 2)
              return "ab";
        string t = "";
        if(n%2 == 0){
            for(int i = 0 ; i < n-1 ; i++){
                t += 'a'; 
            }
            t += 'b';
        }
        else if(n == 7){
            t = "holasss";
        }
        else {
            t += 'a';
            for(int i = 1 ; i < n-1 ; i++){
                t += 'b';
            }
            t += 'c';
        }
        return t;
    }
};

class Solution {
public:
    string generateTheString(int n) {
        string res = "";
        if (n%2 == 0)
        {
            res += 'b';
            n-=1;
        }
        for (int i=0;i < n;i++)
            res += 'a';
        return res;
    }
};
