class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int ele1 = 0, ele2 = 1; // initialize differently
        int n = nums.size();

        // Step 1: Find candidates
        for (int num : nums) {
            if (num == ele1) {
                count1++;
            }
            else if (num == ele2) {
                count2++;
            }
            else if (count1 == 0) {
                ele1 = num;
                count1 = 1;
            }
            else if (count2 == 0) {
                ele2 = num;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Step 2: Verify
        count1 = 0, count2 = 0;
        for (int num : nums) {
            if (num == ele1) count1++;
            else if (num == ele2) count2++;
        }

        vector<int> res;
        if (count1 > n / 3) res.push_back(ele1);
        if (count2 > n / 3) res.push_back(ele2);

        return res;
    }
};