class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        if (k == 1) {
            int freq[51] = {0};
            for (int x : nums) {
                freq[x]++;
            }
            int ans = -1;
            for (int val = 50; val >= 0; val--) {
                if (freq[val] == 1) {
                    return val;
                }
            }
            return -1;
        }

        int ans = -1;
        
        int countFirst = count(nums.begin(), nums.end(), nums[0]);
        if (countFirst == 1) {
            ans = max(ans, nums[0]);
        }

        int countLast = count(nums.begin(), nums.end(), nums[n - 1]);
        if (countLast == 1) {
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};