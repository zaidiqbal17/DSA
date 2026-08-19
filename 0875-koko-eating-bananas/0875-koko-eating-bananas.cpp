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

    bool calculateTotal(int mid,vector<int>& piles, int h){
      
      long long hour = 0;
      for(int i=0;i<piles.size();i++){
             hour +=(piles[i]+mid-1)/mid;
      }
      return hour<=h;
       
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxElement(piles);

        while(low<=high){
            int mid = (low+high)>>1;

            if( calculateTotal(mid,piles,h)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};