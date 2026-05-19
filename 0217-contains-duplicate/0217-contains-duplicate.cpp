class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // one direct instinct hitting my mind is :freuency array 
        //vector<int>freq(1000,0);
        // but seee here is the size issue bcz it can go upto 1000 element only...
        // so analyzing the constarint: 1 <= nums.length <= 10^5
        // so I should use: 10^5+1= 100001
    //     vector<int>freq(100001,0);
    //     for( int i=0 ; i<nums.size() ; i++ ){
    //         freq[nums[i]]++;
    //     }
    //     // checking 
    //     for ( int j:freq){
    //         if ( j >= 2 ) return true;
    //     }
    //     return false;
    // }

    // this appraoch is failing bcz -109 <= nums[i] <= 109  element can be negative 
    // and due to this...freq[nums[i]]->will go out of bound.


    // so other appraoch:
    // see set have only distinct elements 
    unordered_set<int>s;
    for ( int i=0 ; i<nums.size() ; i++ ){
        if( s.count(nums[i])==1 ) return true;
        s.insert(nums[i]);
    }
    return false;
    }
};