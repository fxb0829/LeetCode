/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-13 22:38:29
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-14 22:40:32
 */
/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while (left <= right)
        {
            int mid = (left+right)>>1;
            if(nums[mid] == target)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
            {
                return mid;
            }else if(nums[mid] < target)
            {
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return -1;
    }
};
// @lc code=end

