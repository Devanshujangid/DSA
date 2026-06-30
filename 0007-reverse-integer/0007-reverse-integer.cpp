class Solution {
public:
    int reverse(int x) {
        // step 1: find the last digit of the given integer
        int reverse=0;
        while ( x!=0 ){
            int last_digit = x%10;  
            if ( INT_MIN/10>reverse || reverse>INT_MAX/10 ){
              return 0;
            }
            reverse=reverse*10+last_digit;
            x=x/10;
        }

        if ( reverse<INT_MIN || reverse>INT_MAX ) return 0;
        else return reverse;
    }
};