class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int left = 0;
        int maxLen=INT_MIN;

        for(int right = 0;right<s.length();right++){
            mp[s[right]]++;

            while(mp[s[right]]>2){
                mp[s[left]]--;
                left++;
            }
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }

};