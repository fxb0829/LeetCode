/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> result_set;
        unordered_set<int> contrast_set(nums1.begin(),nums1.end());
        for(int val:nums2){
            if(contrast_set.find(val) != contrast_set.end()){
                result_set.insert(val);
            }
        }
        return vector<int>(result_set.begin(),result_set.end());
    }
};
// @lc code=end

