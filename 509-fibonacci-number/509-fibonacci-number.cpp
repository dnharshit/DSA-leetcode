class Solution {
public:
    int ans;
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        ans = fib(n-1) + fib(n-2);
        return ans;
    }
};