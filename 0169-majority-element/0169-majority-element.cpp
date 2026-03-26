class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj_ele;
        int count=0;
         for ( int i=0 ; i<n ; i++ ){
            // algo
            if ( count == 0 ){
                // make it to 1
                count=1;
                // update majority element
                maj_ele=nums[i];
            }
            else if( nums[i]==maj_ele ){
                count++;
            }
            else{
                count--;
            }
        }
        // majority element always exists->do not need to check anything!
        return maj_ele;  
    }
};