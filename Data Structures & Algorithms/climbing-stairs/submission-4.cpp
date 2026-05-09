class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int a = 1;
        int b = 2;
        int i = 1;
        while( i < n-1 ){
            int tmp = a + b;
            a = b;
            b = tmp;
            i++;
        }

        return b;
    }
};
