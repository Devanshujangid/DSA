class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c_o=0;
        int max_c_o=0;
        int n=nums.size();
        // travserse the array
        for ( int i=0 ; i<n ; i++ ){
            if ( nums[i] ==  1 ){
                c_o++;
                max_c_o=max(c_o,max_c_o);
            } else{
                c_o=0;
            }
        }
    return max_c_o;
    }
};