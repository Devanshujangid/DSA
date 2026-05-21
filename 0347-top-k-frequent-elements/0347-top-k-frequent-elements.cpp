class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // step 1 : declaring a map
        unordered_map<int,int>mpp; // map do not allow duplicate elements.
        // step 2 : traverse the given array
        int n = nums.size();
        for ( int i=0 ; i<n ; i++ ){
            // insert in map while travsersing 
            mpp[nums[i]]++;
        }
        // so now we have all elements with their respective correct frequencies.

        // just need to return k most frequent elements 
        // we will store these in result vector
        vector<int>result;

        // sort map by values because we want highest K frequent elements 
        vector<pair<int,int>> v(mpp.begin(),mpp.end());
        //sort ( v.begin().second,v.end().second ); // -> this is actually sorting by value not by frquency
        sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b) {
    return a.second > b.second;
});
        // travsers in array till k
        for ( int i=0 ; i<k ; i++ ){
            result.push_back(v[i].first);
        }

        return result;



    }
};