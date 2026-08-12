class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left =0;
        int rigth=numbers.size()-1;

        while(left<rigth){
            int sum = numbers[left]+numbers[rigth];
            if(sum==target){
                return {left+1,rigth+1};
            }
            else if(sum>target){
                rigth--;
            }
            else{
                left++;
            }
        }
        return {-1,-1};
    }
};