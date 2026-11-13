class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // brute force 
        vector<int>result;

        
    //     for ( int i=0 ; i<n ; i++ ){
    //         int count=0;
    //         // for picking element 
    //         for ( int j=0 ; j<n ; j++ ){
    //             // for counting occureences if element repeats
    //             if ( nums[j] == nums[i] ) {
    //                 count++;
    //                 if ( count>n/3 && find(result.begin(),result.end(),nums[i]) == result.end() ) {
    //                     result.push_back(nums[i]);
    //                 }
    //             }
    //         }
    //     }
    // return result;


        // Hashmap approach
    // unordered_map<int,int>mpp;
    // // key = element of array & value = frequency of element 

    // // traversing the array
    // for ( int i=0 ; i<n ; i++ ){
    //     if ( !mpp.contains(nums[i]) ){
    //         mpp[nums[i]]=1;
    //     } else {
    //         mpp[nums[i]]++;
    //     }
    // }

    // // traverse in map
    // for ( auto it = mpp.begin(); it != mpp.end(); it++ ){
    //     if ( it->second > n/3 ) {
    //         result.push_back(it->first);
    //     }
    // }

    // return result;


// better hashmap approach:
    unordered_map<int,int>mpp;
    // traverse the array
    for ( int i=0 ; i<n ; i++ ){
        // if ( !mpp.contains(nums[i]) ){
        //     mpp[nums[i]] = 1;
        // } 
        
            mpp[nums[i]]++;
         if( mpp[nums[i]] == (n/3)+1 ) {
            result.push_back(nums[i]);
        } 
    }
      return result;
    }
};