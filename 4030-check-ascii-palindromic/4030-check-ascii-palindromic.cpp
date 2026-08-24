class Solution {
private: 
    string checkBinary(string s){
        string ans = "";
        for(char ch : s){
            int x = ch;

             for(int i = 7; i >= 0; i--) {
             ans += ((x >> i) & 1) + '0';
            }
        }
        return ans;
    }
public:
    bool isPalindromic(string s) {
          string binary = checkBinary(s);
          
          int n = binary.length();

          int left = 0;
          int right = n-1;

          while(left<right){
            if(binary[left]!=binary[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
          
        }
          return true;

    }
};