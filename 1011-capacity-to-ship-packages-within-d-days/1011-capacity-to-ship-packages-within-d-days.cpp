class Solution {
private:
   long long findSum(vector<int>& weights){
    long long sum = 0;
    int n = weights.size();
    for(int i=0;i<n;i++){
        sum +=weights[i];
    }
    return sum;
   }

   bool isitPossible(long long mid,vector<int>& weights, int days){
    long long requiredDay = 1;
    long long sum = 0;
    int n = weights.size();
    for(int i=0;i<n;i++){
        sum +=weights[i];
        if(sum>mid){
            requiredDay++;
            sum = weights[i];
        }
    }
      return requiredDay<=days;

   }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(), weights.end());
        long long high = findSum(weights);

        while(low<=high){
            long long mid = (low+high)>>1;

            if(isitPossible(mid,weights,days)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};