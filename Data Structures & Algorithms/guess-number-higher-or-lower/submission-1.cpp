/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long high = n;
        long low = 1;
        long current = (high + low) / 2;

        int attempt = guess(current);
        while(attempt != 0){
            // My guess is higher than the picked number
            if(attempt == -1){
                high = current - 1;
                current = (high + low) / 2;
            }else{
                low = current + 1;
                current = (high + low) / 2;
            }
            attempt = guess(current);
        }

        return current;
    }
};