class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            int left = i + 1;
            int right = n-1;

            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];

                if(sum==0){
                    ans.insert({nums[i],nums[left],nums[right]});
                }
                if(sum>0){
                    right--;
                }
                else{
                    left++;
                }
            }
           
        }
         return vector<vector<int>>(ans.begin(), ans.end());
    }
};