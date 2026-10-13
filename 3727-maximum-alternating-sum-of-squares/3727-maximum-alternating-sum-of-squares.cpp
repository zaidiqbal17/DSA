class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
                for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
                sort(nums.begin(), nums.end());

        int left = 0;
        int right = n - 1;
        long long ans = 0;
        while (left < right) {
            ans += 1LL * nums[right] * nums[right] - 1LL * nums[left] * nums[left];
            left++;
            right--;
        }
        if (left == right) {
            ans += 1LL * nums[left] * nums[left];
        }

        return ans;
    }
};