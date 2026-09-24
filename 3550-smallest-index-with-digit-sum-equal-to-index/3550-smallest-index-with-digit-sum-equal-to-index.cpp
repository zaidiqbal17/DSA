class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            int digit = 0;
            int x = nums[i];

            while(x>0){
                digit +=x%10;
                x /=10;
            }
            if(digit==i){
                return i;
            }
        }
        return -1;
    }
};