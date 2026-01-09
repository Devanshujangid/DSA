class Solution {
public:
   
   double recursivepow(double x , long long pow ){
       // base cases
       if ( pow==0 ) return 1;
       if ( x==0 ) return 0;
       // now handle that if power is odd or if power is even

       double half=recursivepow(x,pow/2);
       // if power is even
       if ( pow%2==0 )  return  half*half;
       else return half*half*x;

   }
   
    double myPow(double x, int n) {
       long long pow=n;  // casting n into double to handle edge cases
       if(pow<0){
        pow=-pow;
        x=1/x;
       }
       return recursivepow(x,pow);
    }
};