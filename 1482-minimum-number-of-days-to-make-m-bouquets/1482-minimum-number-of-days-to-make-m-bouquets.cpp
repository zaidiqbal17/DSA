class Solution {
private : 
    bool ispossible(int days,vector<int>& bloomDay, int m, int k){
        int count = 0;
        int bouquets = 0;
        int n= bloomDay.size();

        for(int i=0;i<n;i++){
            if(bloomDay[i]<=days){
                count++;
            }
            else{
                bouquets +=count/k;
                count = 0;
            }
            
        }
        bouquets +=count/k;
        return bouquets>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        if(1LL*m*k>n){
            return -1;
        }
        
        while(low<=high){
            int mid = (low + high)>>1;

            if(ispossible(mid,bloomDay,m,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;

    }
};