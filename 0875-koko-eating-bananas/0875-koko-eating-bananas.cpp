class Solution {
private : 
    int maxElement(vector<int>& piles){
        int n = piles.size();
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            if(piles[i]>maxi){
                maxi = piles[i];
            }
        }
        return maxi;
    }

    long long calculateTotal(int mid,vector<int>& piles){
      
      long long hour = 0;
      for(int i=0;i<piles.size();i++){
             hour +=ceil((double)piles[i]/(double)mid);
      }
      return hour;
       
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxElement(piles);

        while(low<=high){
            int mid = (low+high)>>1;

            long long totalHour = calculateTotal(mid,piles);

            if(totalHour<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};