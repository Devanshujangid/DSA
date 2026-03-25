class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res; // to store the answer
        // because intersection sontains unique elements
        // so use -> set
        unordered_set<int>s;
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        // for two pointers-> sort the arrays 
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while ( i<n && j<m ){
            // if element matches
            if ( nums1[i]==nums2[j] ){
                s.insert(nums1[i]);
                i++;
                j++;
            }
           else  if ( nums1[i]<nums2[j] ) i++;
           else  if ( nums1[i]>nums2[j] ) j++;
        }

        // now push set elements to the res array 
        for ( auto value:s ){
            res.push_back(value);
        }
        return res;
    }
};