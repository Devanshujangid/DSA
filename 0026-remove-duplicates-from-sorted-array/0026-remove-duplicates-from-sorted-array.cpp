class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // using two pointers here
        // i->let this will 'point to unique element' only
        // j-> this wil search for unique element and give it to 'i'
        
        // initially No. of unique elements=0
        //int k=1;
        int i=0;
        for ( int j=1 ; j<nums.size() ; j++ ){
           // if ( nums[i]==nums[j] ){
                // so here no unique element
                //j++;
            //}
            if ( nums[i] != nums[j] ){
                // unique element is their!
                //k++;
                // i will make place for it
                i=i+1;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};