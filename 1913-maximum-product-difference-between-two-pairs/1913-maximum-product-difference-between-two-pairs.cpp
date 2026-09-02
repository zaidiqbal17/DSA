class Solution {
private:
    int findMaxproduct(vector<int>& nums){
       int n = nums.size();
       int first = -1;
       int second = -1;

       for(int i=0;i<n;i++){
        if(nums[i]>first){
            second = first;
            first = nums[i];
        }
        
        else if(nums[i]>second){
                second = nums[i];
            }
        
     
       }
       return first*second;
    }
     int findMinproduct(vector<int>& nums){
       int n = nums.size();
       int first = INT_MAX;
       int second = INT_MAX;

       for(int i=0;i<n;i++){
        if(nums[i]<first){
            second = first;
            first = nums[i];
        }
        else if(nums[i]<second){
            second = nums[i];
        }
       }
       return first*second;
    }
public:
    int maxProductDifference(vector<int>& nums) {
       int maxProduct = findMaxproduct(nums);
       int minProduct = findMinproduct(nums);

       int ans = maxProduct - minProduct;

        return ans;
        
    }
};