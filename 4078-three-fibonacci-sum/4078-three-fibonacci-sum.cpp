class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0;
        long long b = 1;
        long long c = 1;

        while(a+b+c<=n){
            if(a+b+c==n){
                return true;
            }

            long long d = b + c;
            a=b;
            b=c;
            c=d;
        }
        return false;

    }
};