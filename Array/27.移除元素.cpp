/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-14 22:48:09
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-16 16:08:28
 */
/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0,fast = 0;
        while (fast < nums.size())
        {
            if(nums[fast] != val){ 
                nums[slow++] = nums[fast];
            }
            fast++;
        }
        return slow; 
    }
};
// @lc code=end

