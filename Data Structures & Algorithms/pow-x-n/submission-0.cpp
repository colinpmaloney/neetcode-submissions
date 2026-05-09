class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        
        double result;
        if(n > 0){
            result = x;
            for(int j = 0; j < n-1; j++){
                result *= x;
            }
        }else{
            result = 1/x;
            for(int j = 0; j > n+1; j--){
                result *= 1/x;
            }
        }


        return result;
    }
};
