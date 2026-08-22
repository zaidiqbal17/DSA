class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;

        for(int i=0;i<n-1;i++){
           int difference = nums[i+1]-nums[i];
           ans = max(ans,difference);
        }
        return ans;
    }
};