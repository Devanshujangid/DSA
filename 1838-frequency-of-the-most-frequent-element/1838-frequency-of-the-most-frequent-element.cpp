class Solution {
public:

   int bSearch(int target_idx , int k , vector<int>& nums, vector<long>&prefixSum ){
    // find target element
    int target_element=nums[target_idx];
    int l=0;
    int r=target_idx;
    int good_idx=target_idx;
    while(l<=r){
         int mid = l+(r-l)/2;
         // find total number of elements from mid to target element
         long count=target_idx-mid+1;
         long windowSum=count*nums[target_idx];
         // current sum find from mid to target element
         long currSum=prefixSum[target_idx]-prefixSum[mid]+nums[mid];
         // total operations 
         int ops = windowSum-currSum;

         // now condition
         if ( ops> k ){
            // not feasible 
            // make window small
            l=mid+1;
         } else{
            // then its good
            good_idx=mid;
            r=mid-1; // if any big window possible then
         }
     }
     return  target_idx-good_idx+1; // here comes frequency== no. of elements in window
   }
   
 
    int maxFrequency(vector<int>& nums, int k) {
        // size of array
        int n = nums.size();
        // step 1-> sort the array
        sort(nums.begin(),nums.end());
        // calculate prefix sum
        vector<long>prefixSum(n);
        prefixSum[0]=nums[0]; // first element of prefix sum will be equals to the 1 elements of nums
        for ( int i=1 ; i<n ; i++ ){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }

        // now start
        int result=0;
        // make each element target idx -> to validate max frequency
        for ( int target_idx=0 ; target_idx<n ; target_idx++ ){
            result=max(result, bSearch(target_idx , k , nums , prefixSum) );
        }
    return result;
    }
};