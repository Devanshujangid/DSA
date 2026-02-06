class Solution {
public:
    static const long long MOD = 1e9 + 7;
    long long pow(long long x , long long y ){ // we will use recurssion
        // base case
        if ( y==0 ) return 1;
        long long temp = pow(x,y/2);
        long long result = (temp*temp) % MOD;
        // even
        if ( y%2==0 ) return result;
        else return (result*x)%MOD;
    }
    
    int countGoodNumbers(long long n) {
        // first of all calculate the number of odd and even positions
        long long odd=n/2;
        long long even=n/2+(n%2);
        return (pow(5,even)*pow(4,odd))%MOD;
    }
};