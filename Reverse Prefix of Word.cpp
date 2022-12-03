class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int c = 0;
        for(int i = 0 ; i < n; i++){
            if(word[i] == ch){
                c = i;
                break;
            }
        }
        int i = 0;
        while(i <= c){
            swap(word[i++], word[c--]);
        }
       return word;
    }
};
