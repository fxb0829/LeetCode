/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-18 17:28:05
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-18 22:52:42
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

int main(){

    Solution solution;
    vector<int> nums = {-1,3,5,9,2,6,8};
    int index = solution.search(nums,9);
    cout << "你好"<< index << endl;
    
    return 0;
}
