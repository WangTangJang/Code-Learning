/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x<=1 ){
            return x;
        }
        int left = 1;
        int right = x;
        while(left<= right){
            int mid  = left + (right - left ) / 2;
            if( mid <= x/mid && (mid +1) > x/(mid +1)){
                return mid;
            }else if(mid > x/mid){
                right = mid -1;
            }else{
                left = mid +1;
            }

        }
        return 0;
    }
};
// @lc code=end

