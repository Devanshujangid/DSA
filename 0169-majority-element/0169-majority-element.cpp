class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force : use hash array -> but it will make S.C=O(n)
        // optimal : in O(1) space 
        // boyers moore voting algorithm:

        // we need two varaiables:
        int candidate=nums[0]; // initilize it with first array element
        int supporters=0;
        // now traverse the array- start from index 1
        for ( int i=0 ; i<nums.size() ; i++ ){
            // case 1: current element matches the current candidate
            if ( nums[i]==candidate ){
                // increment supporter count by 1
                supporters++;
            } else{
                // case 2: decrease the supporter count
                supporters--;
            }
            // if supporter count == 0 
            if ( supporters==0 ){
                // then change the candidate
                candidate = nums[i];
                supporters++;
            }
        }
        return candidate;
    }
};