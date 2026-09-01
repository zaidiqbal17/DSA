class Solution {
private:
      int miniIndex(vector<int>& nums){
          int index = 0;
          for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[index]){
                index = i;
            }
          }
          return index;
      }

      int maxiIndex(vector<int>& nums){
         int index = 0;
          for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[index]){
                index = i;
            }
          }
          return index;
      }

public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = miniIndex(nums);
        int maxIndex = maxiIndex(nums);

        int n = nums.size();
        int leftside  = max(minIndex,maxIndex)+1;
        int rightside = max(n-minIndex,n-maxIndex);

        int bothside1;

        if(minIndex<maxIndex){
             bothside1 = minIndex+1 + n-maxIndex;
        }
        else{
             bothside1 = maxIndex+1+n-minIndex;
        }
        
      

        int ans = min(bothside1,min(leftside,rightside));

        return ans;

    }
};