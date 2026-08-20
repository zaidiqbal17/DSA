class Solution {
private:
    long long findSum(vector<int>& nums){
        int n = nums.size();
        long long sum =0;
        for(int i=0;i<n;i++){
            sum +=nums[i];
        }
        return sum;
    }
    bool isitPossible(int mid,vector<int>& nums, int k){
        int ans = 1;
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            if(sum + nums[i]>mid){
                ans++;
                sum = nums[i];
            }
            else{
                sum +=nums[i];
            }
        }
        return ans<=k;
    }
    
public:
    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(),nums.end());
        long long high = findSum(nums);
        
        while(low<=high){
            long mid = (low+high)>>1;

            if(isitPossible(mid,nums,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};