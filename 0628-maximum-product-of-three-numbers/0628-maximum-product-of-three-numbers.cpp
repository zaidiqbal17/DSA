class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first=INT_MIN,second=INT_MIN,third=INT_MIN;
        int firstMIN=INT_MAX, secondMIN=INT_MAX;
        int n = nums.size();
       

        for(int i=0;i<n;i++){

            if(nums[i]>first){
                third=second;
                second=first;
                first=nums[i];
            }
            else if(nums[i]>second){
                third=second;
                second=nums[i];
            }
            else if(nums[i]>third){
                third=nums[i];
            }
        }

          for(int i=0;i<n;i++){
            if(nums[i]<firstMIN){
                secondMIN=firstMIN;
                firstMIN=nums[i];
            }
            else if(nums[i]<secondMIN){
                secondMIN=nums[i];
            }
          }
        int ans = max(first * second * third,
    firstMIN * secondMIN * first);;
        return ans;
    }
};