/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-16 22:51:07
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-16 23:18:18
 */
/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    //暴力解法
    // int minSubArrayLen(int target, vector<int>& nums) {
    //     int len = nums.size();
    //     int minLen = INT32_MAX;
    //     for(int i = 0; i < len; i++){
    //         int sum = 0;
    //         for(int j = i; j < len; j++){
    //             sum += nums[j];
    //             if(sum >= target && j-i+1 < minLen){
    //                 minLen = j-i+1;
    //             }
    //         }
    //     }
    //     return minLen == INT32_MAX?0:minLen;
    // }

    //滑动窗口（双指针）
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0,j = 0;
        int sublen = 0;
        int sum = 0;
        int minLen = INT32_MAX;
        for (int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while (sum >= target){
                sublen = j-i+1;
                minLen = sublen < minLen?sublen:minLen;
                sum -= nums[i++];
            }
        }
        return minLen == INT32_MAX?0:minLen;
    }
};
// @lc code=end

