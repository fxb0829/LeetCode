/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
		int arr[26] = {0};
        for(int i = 0; i < s.size(); i++){
            arr[s[i]-'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            arr[t[i]-'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

