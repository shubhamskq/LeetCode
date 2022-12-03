class Solution {
public:
    bool squareIsWhite(string coordinates) {
       int c = coordinates[0] - 'a' + 1;
       int b = coordinates[1] - '0';
       if((c%2 == 1 && b%2 == 1) || (c%2 == 0 && b%2 == 0)) 
              return false;
     return true;
    }
};


class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
     return (coordinates[0] - 'a' + coordinates[1] - '1') % 2;
    }
};
