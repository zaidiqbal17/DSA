class Solution {
    private:
    bool isPossible(vector<int>& piles, int mid, int h){
        long long hours = 0;
        for(auto p : piles){
            hours += (p+mid-1)/mid;
        }
        return hours<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        int ans = end;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(isPossible(piles,mid,h)){
                ans=mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
         return ans;
    }
};