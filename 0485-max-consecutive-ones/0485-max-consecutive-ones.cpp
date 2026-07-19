class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c_o=0; // for storing no of consecutive ones till zero comes
        int max_c_o=0; // for storing max. no. of consecutive ones in whole array 
        //travesre from the array 
        for ( int i=0 ; i< nums.size() ; i++ ){
            // if current element is 1:
            if ( nums[i] == 1 ){
                c_o++;
                max_c_o = max( max_c_o,c_o );
            } // else current element is 0:
            else {
                // save previous c_o value to:
                max_c_o = max( max_c_o,c_o );
                // make c_o=0
                c_o = 0;
            }
        }
        return max_c_o;
    }
};