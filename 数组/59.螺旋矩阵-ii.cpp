/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-18 16:59:37
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-18 17:19:21
 */
/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        //初始化一个二维数组
        vector<vector<int>> array(n,vector<int>(n,0));
        //起始位置
        int startX = 0,startY = 0;
        //循环次数
        int loop = n/2;  //偶数刚好合适，奇数就单独对中间的进行处理
        //边长控制
        int offset = 1;  //左闭右开 假如n=3 边0、1(i < n-offset)
        //数据
        int count = 1;
        //循环画圈（以左闭右开原则）
        while (loop--){
            //起始位置
            int i = startX;
            int j = startY;
            //从左到右
            for(;j < startY+n-offset; j++){
                array[i][j] = count++;
            }
            //从上到下
            for(;i < startX+n-offset; i++){
                array[i][j] = count++;
            }
            //从右到左
            for(;j > startY; j--){
                array[i][j] = count++;
            }
            //从下到上
            for(;i > startX; i--){
                array[i][j] = count++;
            }
            //走完一遍之后，起始位置改变
            startX++;
            startY++;
            //边控制  每次每条边都会-2
            offset += 2;
        }
        //如果n是奇数，处理中心的位置
        if(n % 2){
            array[n/2][n/2] = count;
        }
        return array;
    }
};
// @lc code=end

