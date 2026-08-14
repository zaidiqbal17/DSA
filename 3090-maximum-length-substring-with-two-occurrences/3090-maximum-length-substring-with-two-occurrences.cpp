class Solution {
public:
    int maximumLengthSubstring(string s) {
        // unordered_map<char,int>mp;
        vector<int>mp(26,0);
        int left = 0;
        int maxLen=INT_MIN;

        for(int right = 0;right<s.length();right++){
            mp[s[right]-'a']++;

            while(mp[s[right]-'a']>2){
                mp[s[left]-'a']--;
                left++;
            }
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }

};