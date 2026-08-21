class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;

        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-1;j++){
                int left = j+1;
                int right = n-1;

                while(left<right){
                    long long sum = 1LL*nums[i] + nums[j] + nums[left] + nums[right];

                    if(sum==target){
                        ans.insert({nums[i],nums[j],nums[left],nums[right]});
                    }
                    if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};