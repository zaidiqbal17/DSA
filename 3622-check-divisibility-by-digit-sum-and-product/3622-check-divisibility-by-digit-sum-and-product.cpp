class Solution {
private:
   int checkSum(int n ){
      int sum = 0;
      while(n>0){
        int digit = n%10;
        sum +=digit;
        n /=10;
      }
      return sum;
   }
   
   int checkProduct(int n){
    int product = 1;
     while(n>0){
        int digit = n%10;
        product *=digit;
       
        n /=10;
     }
     return product;
   }

public:
    bool checkDivisibility(int n) {
        int a = checkSum(n);
        int b = checkProduct(n);

        int sum = a + b;

        return n%sum==0;
    }
};