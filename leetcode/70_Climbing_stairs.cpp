/**
 * The core logic relies on the fact that to reach any step n,
 * there are only two possible last moves you could have made: You were on step (n-1)
 *  and took a 1-step climb.You were on step (n-2) and took a 2-step climb.
 * Therefore, the total number of ways to reach step (n)
 * is simply the sum of the ways to reach the two preceding steps:(f(n)=f(n-1)+f(n-2)). 
 * for example f(4) = f(3) + f(2) = 3 + 2 = 5
 * f(5) = f(4) + f(3) = 5 + 3 = 8
 */

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int first = 1;
        int second = 2;

        for (int i = 3; i <= n; ++i) {
            int current = first + second;
            first = second;
            second = current;
        }

        return second;
    }
};