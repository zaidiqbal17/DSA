class Solution {
private:
     
    bool ispossible(int mid,vector<int>& nums, int threshold){
        int n = nums.size();
        int divisor = 0;
        for(int i=0;i<n;i++){
            // divisor +=ceil((double)nums[i]/(double)mid);
            divisor +=(nums[i]+mid-1)/mid;

        }
        return threshold>=divisor;
    }
    

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());

        while(low<=high){
            int mid = (low+high)>>1;

            if(ispossible(mid, nums,threshold)){
                high = mid-1;
                 
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};