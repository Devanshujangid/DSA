class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // my first logic:
        // use map -> but it will lead to O(n) extra space

        // using 2 pointers 
        // initializing pointers 
        int ptr1=0;
        int ptr2=1;
        int n=nums.size();
        // for the last inserted 
        int lastInserted=-1;

        while ( ptr1<n && ptr2<n ){
            // case 1:
            if ( nums[ptr1]==nums[ptr2] ){
                ptr2++; // till nums[ptr1] != nums[ptr2] comes
            } else {
                // now here nums[ptr1] != nums[ptr2] comes
                ptr1++;
                if (lastInserted!=nums[ptr2]){
                nums[ptr1] = nums[ptr2];
                }
                // update the last_inserted element
                lastInserted=nums[ptr2];
            }
        }
        // we need to return number of unique elements 
        // unique elements vha tak rhenge jha tak ptr1 rhega.
        return ptr1+1;
    }
};