/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-24 22:59:59
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-24 23:10:07
 */
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums.size(); i++){
            if(umap.find(nums[i]) != umap.end()){
                //获取map中key对应的value
                //方法：1、迭代器 2、通过key获取
                return vector<int>{umap[nums[i]],i};
            }
            //两种插入数据方法
            umap.insert(pair<int,int>(target-nums[i],i));
            // umap[target-nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

