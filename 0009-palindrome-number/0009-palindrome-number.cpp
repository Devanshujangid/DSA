class Solution {
public:
   
   int reverse(int num){
    int reverse = 0;
    while ( num!=0 ){
        int l_d=num%10;
        if ( reverse<INT_MIN/10 || reverse>INT_MAX/10){
        return false;
        } 
        reverse=reverse*10+l_d;
        num=num/10;
    }
    return reverse;
   }

    bool isPalindrome(int x) {
        // if reverse of x == x : palidrome
        if ( x<0 ) return false;
        if ( reverse(x)==x ) return true;
        else return false;
    }
};